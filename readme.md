# Dilemma Keyboard 4x6

![Dilemma](https://www.etsy.com/listing/1886969355/dilemma-max-split-keyboard-hotswap-diy)

Make example for this keyboard (after setting up your build environment):

    make meetlab/kafkasplit:default

Flashing example for this keyboard:

    make meetlab/kafkasplit:default:flash

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
