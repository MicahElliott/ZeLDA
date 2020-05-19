# The Woodpecker Makery's ZeLDA Layout for Planck Keyboards

The ZeLDA (Zero-Look-Down Access) Layout is a minimalist approach to
keyboarding.  The philsophy is that you should never have to reach
farther than one adjacent key.  It's still a QWERTY, but seriously
improved.

See the [2017 Open Source Bridge
session](http://opensourcebridge.org/sessions/1988) and
[slides](https://www.slideshare.net/secret/3oeMZCprt1mo1e) for more
details.

It is built completely on open source, leveraging
the [QMK Firmware Toolkit](https://docs.qmk.fm/build_environment_setup.html).

Compared to a traditional keyboard, ZeLDA offers the following
improvements:

- minimal reaching for any key for more comfort
- unstaggered grid layout (avoid twisted hands)
- a conservative spacebar: seven thumb-reachable keys! (vs 3)
- high quality keys -- it's mechanical!
- tiny desktop footprint
- symmetry (all modifiers are on both hands)
- 2-keys-for-1-finger modifier combos (with proper caps)
- easy chording
- trivial "sixth finger" palming

![keymap diagram](https://raw.githubusercontent.com/MicahElliott/ZeLDA/master/keyboard-layout-all.png)

See the [Getting Started Guide](GUIDE.md) for more details.

## Instructions

### Install toolchain on a Mac

```sh
brew install avrdude avr-gcc dfu-programmer
```

### Flash the firmware

1. Get yourself a Planck (or use something like
   [QWERKey](https://github.com/MicahElliott/qwerkey) with
   xmodmap/xcape)

1. Install the QMK [prerequisites](https://docs.qmk.fm/build_environment_setup.html).

1. git clone [QMK](https://github.com/qmk/qmk_firmware).

1. `cd qmk_firmware/keyboards/planck/keymaps/` and clone this repo

1. `cd` back up to the top level

1. Build/upload with `make planck/rev4:zelda:flash`

1. Tweak `keymap.c` to your heart's content

## Use with TWMs

http://i3wm.org/docs/userguide.html#_default_keybindings

A sample `i3config` file has been provided as a starting point for
configuring i3.  Its mappings correspond to the diagram.

## More Features

- Full 104-key functionality rolled into 45 keys
- Custom switches of your choosing
- Two-key-per-finger combos
- Redundant mappings
- Lazy mappings for right-hand only work (left-hand rest)
- Dual-mode keys: hold or tap
- Mnemonics for symbol keys
- More symbols not needing Shift or other modifier
- Symmetric, comfortable modifiers: Ctrl, Alt, Shift, Super
- All four modifiers neatly organized on pinkies
- Tiny spacebar for more thumb keys
- Ortholinear to remove crazy staggered and twisted hands
- Smarter one-hand numpad
  - 789 numpad on top
  - OR, 123 on top for easier reach of higher frequency keys (Benford's Law)
  - opposite of Lower key
  - numlock
- Friendly to Tiling Window Managers (TWM)
- Easy transition to/from qwerty
- "Palm" keys: combinable (you should make them tall and soft)
- Everything scrunched for easy reaching (Ergo!)
- Everything programmable; instructions for uploading custom mappings
- Four default key map modes built in (cycle through with hotkey combo)
- Intuitive layers
- Key combo shortcuts optimized for web browsers and programming editors
- Cheat sheet on back (future)
- Standard Cherry style replaceable keys
- Anki picture-cards for memorizing finger combos (future)

Bonus:

- All keychords can be one-handed
- How-to usage videos (future)
- Works well with [Firefox mouseless browsing plugin](https://addons.mozilla.org/en-US/firefox/addon/mouseless-browsing/)

## License

Copyright © 2020 Woodpecker Makery (WPM) LLC

Distributed under GPLv2/v3, same as QMK Firmware.
