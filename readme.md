# Balice80 QMK/VIAL Firmware
This repository contains the firmware source code for the Balice80, an 85-key split ergonomic mechanical keyboard. The Balice80 features a dedicated Function row (F1-F12), dual rotary encoders, and a gasket-mounted 3D-printed PETG chassis.

## Hardware Specifications
 * Layout: 85-key split layout with a dedicated F-Row and curved alignment.
 * Case: 100% infill PETG 3D printed with magnetic quick-release.
    * Orange USB Type-C Port: Host connection (PC).
    * Blue USB Type-C Port: Interconnect between left and right halves.
 * Mounting: Gasket mount with silicone dampeners.
 * Support: Full VIAL compatibility for real-time remapping.

## Keymap Features
 * Dedicated F-Row: Provides direct access to F1-F12 without layer switching.

 * Dual Rotary Encoders:

	 *   Left Knob: Navigation (Default: Prev/Next; Layer 1: Up/Down).

	  * Right Knob: Media/System (Default: Volume/Mute; Layer 1: Screen Brightness).

 * Standard Typing Logic: Numerical '6' is positioned on the right half. The left-side '6' position defaults to Backspace.

 * Compatibility: Supports standard and stepped Caps Lock keys.

## Compilation Instructions
Copy the source code to the VIAL folder in qmk_firmware/keyboards/balice80 and run the following command to compile the firmware:

bash

```
qmk compile -kb balice80 -km vial
```


## VIAL Customization
The Balice80 is pre-configured for VIAL, allowing for keymap, macro, and encoder adjustments without code modification.

* Download the VIAL client from [https://get.vial.today/](https://get.vial.today/)

* Connect the Balice80 to your PC via the Orange Port.

* The VIAL application will automatically recognize the device.

## Manufacturing & Quality Control
The Balice80 utilizes high-precision 3D printing (PETG). Due to the additive manufacturing process, minor surface textures may be present. Each unit is inspected and deburred for structural integrity and functional precision.

## About PandaKB
PandaKB specializes in professional ergonomic input devices.
Website: [https://pandakb.com](https://pandakb.com)
