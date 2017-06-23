#! /usr/bin/env bash

# qwerkey — keyboard map; call from `.xinitrc` to set mappings
# Requires XCape for parens: https://github.com/alols/xcape

pkill xcape  # don't have multiple xcape running!

# RESET for clean slate!!
setxkbmap -layout us

# Planck/QMK workarounds
xcape -t :s350 -e 'Alt_L=parenleft;Alt_R=parenright'

# Map KC_MENU (SunProps from Planck) to Compose (multi-key)
# Not working from .xinitrc but fine from CLI.  Dang.
xmodmap -e 'keycode 138 = Multi_key'
