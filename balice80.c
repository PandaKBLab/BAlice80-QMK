#include "quantum.h"
#include "split_util.h"
#include "transactions.h"
#include "usb_util.h"

typedef struct _master_layer_led_t {
    bool layer_led;
} master_layer_led_t;

layer_state_t layer_state_set_user(layer_state_t state) {
    if (is_keyboard_master()) {
        bool ledState = get_highest_layer(state) > 0;
        if (is_keyboard_left()) {
            master_layer_led_t data = { .layer_led = ledState };
            transaction_rpc_send(USER_SYNC_LAYER_LED, sizeof(data), &data);
        } else {
            gpio_write_pin(LED_LAYER_PIN, ledState ? 0 : 1);
        }
    }
    return state;
}

void led_init_ports(void) {
    gpio_set_pin_output_open_drain(LED_LAYER_PIN);
    gpio_set_pin_output_open_drain(LED_CAPS_LOCK_PIN);
}

void user_sync_layer_led_handler(uint8_t in_buflen, const void* in_data, uint8_t out_buflen, void* out_data) {
    const master_layer_led_t *data = (const master_layer_led_t *)in_data;
    gpio_write_pin(LED_LAYER_PIN, data->layer_led ? 0 : 1);
}

void keyboard_post_init_user(void) {
    if (!is_keyboard_master() && !is_keyboard_left()) {
        transaction_register_rpc(USER_SYNC_LAYER_LED, user_sync_layer_led_handler);
    }
}

bool usb_vbus_state(void) {
    gpio_set_pin_input_low(USB_VBUS_PIN);
    wait_us(5);
    return gpio_read_pin(USB_VBUS_PIN);
}
