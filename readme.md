# Dilemma Keyboard 4x6

![Dilemma](https://imgs.search.brave.com/Aq5cA8MNwkgfl9FUhDTKWggcF-o1a0IfJQUyx_I66_w/rs:fit:860:0:0:0/g:ce/aHR0cHM6Ly9pLmV0/c3lzdGF0aWMuY29t/LzU3OTExNzEzL3Iv/aWwvYzIxODdlLzcx/MTk1MzU5MDgvaWxf/Nzk0eE4uNzExOTUz/NTkwOF83czFiLmpw/Zw)

Make example for this keyboard (after setting up your build environment):

    make meetlab/kafkasplit:default

Flashing example for this keyboard:

    make meetlab/kafkasplit:default:flash

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
