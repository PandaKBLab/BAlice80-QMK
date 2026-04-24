Balice80 QMK Firmware
This repository contains the QMK firmware for the Balice80, an 85-key split ergonomic mechanical keyboard designed by PandaKB.

The Balice80 distinguishes itself with a dedicated Function row (F1-F12) and a curved key alignment optimized for ergonomic typing.

Technical Overview
Layout: 85 keys (Split configuration).

Architecture: QMK Firmware with VIAL support for real-time remapping.

Hardware Interface:

Orange Port: PC connection.

Blue Port: Interconnect between left and right halves.

Key Features:

Dedicated F-Row for direct access without layer switching.

Dual rotary encoders for navigation and media control.

Curved layout (non-linear) to accommodate natural finger travel.

Gasket-mounted structure support.

Default Configuration
Rotary Encoders
Left Encoder:

Layer 0: Previous/Next (Horizontal navigation).

Layer 1: Up/Down (Vertical navigation).

Right Encoder:

Layer 0: Volume Up/Down (Press to Mute).

Layer 1: Screen Brightness Control.

Keymap Logic
Number 6 Position: Following standard typing habits, the '6' key is located on the right half. The corresponding position on the left half is mapped to Backspace by default.

Caps Lock: Supports both standard and stepped Caps Lock configurations.

Build and Flash

Copy the source code to the VIAL folder in qmk_firmware/keyboards/balice80 and run the following command to compile the firmware

```
qmk compile -kb balice80 -km vial-win
```
VIAL Support
This firmware is pre-configured for VIAL. Users can modify keymaps, macros, and encoder behaviors without reflashing.

Download the VIAL client at get.vial.today.

Connect the Balice80 via the Orange port.

The device will be recognized automatically for real-time adjustment.

About PandaKB
PandaKB focuses on ergonomic input devices and high-precision 3D printed mechanical keyboards. For more information, visit pandakb.com.
