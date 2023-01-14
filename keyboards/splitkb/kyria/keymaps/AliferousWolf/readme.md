# Kyria's Default Keymap

The five different layers are the following:
1. Base layer (QWERTY, Colemak-DH or Dvorak)
2. Navigation layer
3. Symbols/Numbers layer
4. Function layer
5. Adjust layer

## Base layer(s)
```
Base Layer: -

  ,-------------------------------------------.                              ,-------------------------------------------.
  |  Tab   |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  Bksp  |
  |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  |LSFT/Esc|   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;  : |Ctrl/' "|
  |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  | LCTL   |   Z  |   X  |   C  |   V  |   B  | [ {  |      |  |      |  ] } |   N  |   M  | ,  < | . >  | /  ? | F-keys |
  `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                         |PLYPAU| LGUI | LAlt/| Space| Nav  |  |      | SYM  |CapsLK| RGUI |Adjust|
                         |      |      | Enter|      |      |  |      |      |      |      |      |
                         `----------------------------------'  `----------------------------------'
```
Three different well-known keyboard layouts are provided to fill in the placeholder `-` keys: QWERTY, Colemak-DH, and Dvorak. The default layer can be changed at runtime, more info on that in the section on the [adjust layer](#adjust-layer).

```
Base Layer: QWERTY

  ,-------------------------------------------.                              ,-------------------------------------------.
  |  Tab   |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  Bksp  |
  |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  |LSFT/Esc|   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;  : |Ctrl/' "|
  |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  | LCTL   |   Z  |   X  |   C  |   V  |   B  | [ {  |      |  |      |  ] } |   N  |   M  | ,  < | . >  | /  ? | F-keys |
  `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                         |PLYPAU| LGUI | LAlt/| Space| Nav  |  |      | SYM  |CapsLK| RGUI |Adjust|
                         |      |      | Enter|      |      |  |      |      |      |      |      |
                         `----------------------------------'  `----------------------------------'
```

I changed around some of the keys as compared to the "default" keymap provided by the qmk firmware. The 2 empty keys on the right account for the pimoroni trackball. Since I used a 2u key on the left side I had to move capslock to right right. I can't decide if I like left shift and left control where they are, but they are easy to swap around. I made the left encoder play/pause and moved the adjust layer to the right encoder. Everything else has been kept "default" for now as I don't know what else I want to change. I'll have to use it for more time to find out.

## Navigation layer

```
Nav Layer: Media, navigation
                                                                                                                         
,-------------------------------------------.                              ,-------------------------------------------.
|        |      |      |      |      |      |                              | PgUp | Home |   ↑  | End  | VolUp| Delete |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |  GUI |  Alt | Ctrl | Shift|      |                              | PgDn |  ←   |   ↓  |   →  | VolDn| Insert |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|        |      |      |      |      |      |      |ScLck |  |      |      | Pause|M Prev|M Play|M Next|VolMut| PrtSc  |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```
Navigation and media stuff. Pretty nice layout honestly, though I havn't been using it for long.

## Sym layer
```
Sym Layer: Numbers, symbols
                                                                                                                         
,-------------------------------------------.                              ,-------------------------------------------.
|    `   |  1   |  2   |  3   |  4   |  5   |                              |   6  |  7   |  8   |  9   |  0   |   =    |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|    ~   |  !   |  @   |  #   |  $   |  %   |                              |   ^  |  &   |  *   |  (   |  )   |   +    |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|    |   |   \  |  :   |  ;   |  -   |  [   |  {   |      |  |      |   }  |   ]  |  _   |  ,   |  .   |  /   |   ?    |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```
The top row is the unshifted num row, the home row of the layer is the shifted num row and the bottom row contains the hyphen `-` and the underscore `_` on the best lower row spot because of how frequent they are as well as redundant symbols that are already present on the base layer but are reproduced here to avoid juggling back and forth between base, shift, and sym when typing a string of symbols.

Honestly not sure if I want to keep the numbers/symbols like this or if I want to shift them around vertically. For not this is working though.

## Function layer
```
Function Layer: Function keys
                                                                                                                         
,-------------------------------------------.                              ,-------------------------------------------.
|        |  F9  | F10  | F11  | F12  |      |                              |      |      |      |      |      |        |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |  F5  |  F6  |  F7  |  F8  |      |                              |      | Shift| Ctrl |  Alt |  GUI |        |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|        |  F1  |  F2  |  F3  |  F4  |      |      |      |  |      |      |      |      |      |      |      |        |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```
In a similar fashion to the nav layer, pressing down `FKEYS` enables a numpad of function keys on the opposite hand and modifiers on the right-hand home row. Once again, mirror symmetry is leveraged in this keymap for the order of the right-hand modifiers.

## Adjust layer
```
Adjust Layer: Default layer settings, RGB
                                                                                                                         
,-------------------------------------------.                              ,-------------------------------------------.
|        |      |      |QWERTY|      |      |                              |      |      |      |      |      |        |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |      |      |Dvorak|      |      |                              | TOG  | SAI  | HUI  | VAI  | MOD  |        |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|        |      |      |Colmak|      |      |      |      |  |      |      |      | SAD  | HUD  | VAD  | RMOD |        |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

NOTE: The default layer settings set by those keys are *NOT* stored in EEPROM and thus do not persist through boots. If you wish to change the default layer in a non-volatile manner, either change the order of the layers in the firmware, for example like so if you want to set Dvorak as the new default:
```c
enum layers {
    _DVORAK = 0,
    _QWERTY,
    _COLEMAK_DH,
    _NAV,
    _SYM,
    _FUNCTION,
    _ADJUST
};
```
or re-define the `QWERTY`, `COLEMAK` and `DVORAK` keys to point to custom keycodes starting on `SAFE_RANGE` and calling the `set_single_persistent_default_layer` function inside of `process_record_user`.

### Hardware
Pimoroni trackball added along with a 3D printed holder for it so I can screw it on the top plate. I also 3D printed some standoffs to go under the plate (like washers for the screws).
This makes it impossible for the plate to be pushed down off of the switches (the switch plate I lasor cut wasn't super tight on tolorances).
I had some poron switch pads lying around so I put those onthe PCB under each switch.
Soldered akko ocean blue switches, lightly hand lubed. They have a lot of leaf ping, but you can't hear it when typing normally so I think they are fine for a lighter tactile.
NicePBT Beach Day keycaps worked okay for me. They didn't have all of the support for the kyria, but had enough other keys to make it work with the keycap profile (cherry).
Black rotory encoder knobs were off of amazon, came in a 4 pack. They are quite nice, well finished alluminum (I think). Screw hole is kind of large, but no complaints from me.
I got the OLED screens off of amazon, but the TTRS cable, pcb, and other components (including the Elite-Pi MCU) were from Splitkb.

### Rotary Encoder
The left rotary encoder is programmed to control the volume whereas the right encoder sends <kbd>PgUp</kbd> or <kbd>PgDn</kbd> on every turn.
For whatever reason every turn for me means every 2 "clicks" of the encoder. Probably bought the wrong type of encoder for every click to send a signal rather than every second click.

### OLEDs
The OLEDs display the current layer at the top of the active layers stack, the Kyria logo and lock status (caps lock, num lock, scroll lock).
I have added in the classy Luna Pet. Thanks to all those who have done this before me and for those in the QMK discord for the help getting it sorted.
The only fuction that "doesn't work" yet is the jump. I am debating whether or not I want to fix that for the kyria or not (simple fix would be to make luna render on the master side).
WPM is also displayed on the top left of the slave side OLED.

### Underglow
The underglow LEDs are adjustable via the "adjust" layer to cycle through all the RGB colours and different animations.

## Going further…

This default keymap can be used as is, unchanged, as a daily driver for your Kyria but you're invited to treat your keymap like a bonsai. At the beginning, it's just like the default keymap but from time to time, you can tweak it a little. Cut a little key here, let another combo grow there. Slowly but surely it will be a unique keymap that will fit you like a glove.

Check out the #keymap-ideas channel on the official SplitKB Discord server for inspiration.
