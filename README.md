# The Woodpecker Makery's ZeLDA Layout for Planck Keyboards

The ZeLDA (Zero-Look-Down Access) Layout is a minimalist approach to
keyboarding.  The philsophy is that you should never have to reach
more than one key adjacent.  It's still a QWERTY, but seriously
improved.

See the [2017 Open Source Bridge session](http://opensourcebridge.org/sessions/1988) and [slides](https://www.slideshare.net/secret/3oeMZCprt1mo1e) for
more details.

It is built completely on open source, leveraging the QMK Firmware
Toolkit.

Compared to a traditional keyboard, ZeLDA offers the following
improvements:

- minimal reaching for any key for more comfort
- unstaggered grid layout
- a conservative spacebar: seven thumb-reachable keys! (vs 3)
- high quality keys -- it's mechanical!
- tiny desktop footprint

![keymap diagram](https://raw.githubusercontent.com/MicahElliott/ZeLDA/master/keyboard-layout-all.png)

## Instructions

1. Get yourself a Planck (or use something like [QWERKey](https://github.com/MicahElliott/qwerkey) with
   xmodmap/xcape)

1. Install the QMK [prerequisites](https://docs.qmk.fm/build_environment_setup.html).

1. git clone [QMK](https://github.com/qmk/qmk_firmware).

1. `cd qmk_firmware/keyboards/planck/keymaps/` and clone this repo

1. Build/upload with `sudo make CONSOLE_ENABLE=yes debug_enable=true dfu`

1. Tweak `keymap.c` to your heart's content

1. Use xtweak.sh to enable parens on thumbs


## Features

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
- All keychords are one-handed
- How-to usage videos (future)
- Works well with mouseless browsing plugin

## License

Copyright © 2017 Woodpecker Makery (WPM) LLC

Distributed under GPLv2/v3, same as QMK Firmware.
