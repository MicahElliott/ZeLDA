// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

// Trying unicode on linux
/* #define UNICODE_LNX */
/* #define UC_LNX */

#include QMK_KEYBOARD_H

/* #include "planck.h" */
/* #include "action_layer.h" */
/* #ifdef AUDIO_ENABLE */
/*   #include "audio.h" */
/* #endif */
/* #include "eeconfig.h" */

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _COLEMAK 1
#define _DVORAK 2
#define _SYMNUM 3
#define _NAVFUN 4
#define _PLOVER 5
#define _ADJUST 16
#define _FOO 17

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  PLOVER,
  SYMNUM,
  NAVFUN
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Custom macros
/* #define CTL_ESC     CTL_T(KC_ESC)               // Tap for Esc, hold for Ctrl */
#define CTL_MINS    CTL_T(KC_MINS)               // Tap for Minus, hold for Ctrl
#define CTL_TAB     CTL_T(KC_TAB)                // Tap for Tab, hold for Ctrl
#define CTL_ENT     CTL_T(KC_ENT)                // Tap for Enter, hold for Ctrl
#define CTL_QUOT    CTL_T(KC_QUOT)               // Tap for Enter, hold for Ctrl
#define SFT_ENT     SFT_T(KC_ENT)                // Tap for Enter, hold for Shift
#define SFT_ESC     SFT_T(KC_ESC)                // Tap for Esc, hold for Shift
#define SFT_MINS    SFT_T(KC_MINS)               // Tap for Esc, hold for Shift
#define SFT_COLN    SFT_T(KC_COLN)               // Tap for Colon, hold for Shift
#define SFT_PLUS    SFT_T(KC_PLUS)               // Tap for Esc, hold for Shift
#define SFT_QUES    SFT_T(KC_QUES)               // Tap for ?, hold for Shift
#define SFT_SCLN    SFT_T(KC_SCLN)               // Tap for ;:, hold for Shift
#define SFT_GRV     SFT_T(KC_GRV)                // Tap for `~, hold for Shift
#define SFT_ENT     SFT_T(KC_ENT)                // Tap for ?, hold for Shift
// How to get Shift-Space to create Underscore??

// Something is really screwy with alt and gui being swapped.  Also a bug where
// using alt as MT turns ( into 9 and ) into 0
#define ALT_LBRC    ALT_T(KC_LBRC)               // Tap for (, hold for Alt
#define ALT_RBRC    ALT_T(KC_RBRC)               // Tap for ), hold for Alt
#define ALT_RPRN    ALT_T(KC_RPRN)               // Tap for ), hold for Alt
#define ALT_LPRN    ALT_T(KC_LPRN)               // Tap for ), hold for Alt
#define GUI_LBRC    GUI_T(KC_LBRC)               // Tap for [, hold for Alt
#define GUI_RBRC    GUI_T(KC_RBRC)               // Tap for ], hold for Alt
#define GUI_BSLS    GUI_T(KC_BSLS)               // Tap for [, hold for Alt
#define GUI_PLUS    GUI_T(KC_KP_PLUS)            // Tap for ], hold for Alt
#define CTL_RBRC    CTL_T(KC_RBRC)               // Tap for ], hold for Alt
#define CTL_QUOT    CTL_T(KC_QUOT)               // Tap for ', hold for Ctl

// Might be a way to make RALT+SPACE into Alt-Shift

// Another bug where combining Tab with Raise turn Raise into a Shift
// https://www.reddit.com/r/olkb/comments/4xtg2s/can_i_use_mod_tap_with_raise_whats_the_proper_way/
#define NAV_TAB  LT(_NAVFUN, KC_TAB)
#define SYM_TAB  LT(_SYMNUM, KC_TAB)
#define NAV_ESC  LT(_NAVFUN, KC_ESC)
#define SYM_ESC  LT(_SYMNUM, KC_ESC)
#define NAV_ENT  LT(_NAVFUN, KC_ENT)
#define SYM_ENT  LT(_LSYMNUM, KC_ENT)
#define NAV_SCLN LT(_NAVFUN, KC_SCLN)
#define SYM_SCLN LT(_SYMNUM, KC_SCLN)
#define NAV_AST  LT(_NAVFUN, KC_ASTR)
#define SYM_AST  LT(_SYMNUM, KC_ASTR)
#define NAV_UND  LT(_NAVNUM, KC_UNDERSCORE)
#define SYM_UND  LT(_SYMNUM, KC_UNDERSCORE)
#define NAV_BSPC LT(_NAVFUN, KC_BSPC)
#define SYM_BSPC LT(_SYMNUM, KC_BSPC)
#define NAV_EQL  LT(_NAVFUN, KC_EQL)
#define SYM_EQL  LT(_SYMNUM, KC_EQL)
#define SYM_GRV  LT(_SYMNUM, KC_GRV)
#define SYM_MINS LT(_SYMNUM, KC_MINS)

/* #define TAPPING_TERM 200 */

// Tap Dance Declarations (see qmk readme)
enum {TD_SCLN_COLN = 0};
// Tap Dance Definitions
/* qk_tap_dance_action_t tap_dance_actions[] = { */
  // Tap once for ., twice for :
  /* [TD_SCLN_COLN]  = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COLN) */
  // Other declarations would go here, separated by commas, if you have them
/* }; */


// Keys to add: Compose, Mouse-click, Menu, CapsLock, Media Keys, NumLock
// Linux Compose key how-to:
// The KC_MENU generates a `SunProps` code (138), so it need to be mapped.
// xmodmap -e 'keycode 138 = Multi_key'

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {

/* Qwerty
 * ,---------------------------------------------------------------------------------------------.
 * | Nav Esc|   Q  |   W   |   E   |   R   |   T  |   Y  |   U   |   I   |   O   |   P  | Nav Bsp|
 * |--------+------+-------+-------+-------+-------------+-------+-------+-------+------+--------|
 * | Ctl Tab|   A  |   S   |   D   |   F   |   G  |   H  |   J   |   K   |   L   |   '" | Ctl Ent|
 * |--------+------+-------+-------+-------+------|------+-------+-------+-------+------+--------|
 * | Sft ;: |   Z  |   X   |   C   |   V   |   B  |   N  |   M   |   ,<  |   .>  |   /? | Sft -_ |
 * |--------+------+-------+-------+-------+------+------+-------+-------+-------+------+--------|
 * | Sym `  | Comp |   :   |GUI [{ | Alt ( |    Space    | Alt ) |GUI ]} |   +   | Foo  | Sym  = |
 * `---------------------------------------------------------------------------------------------'
 *
 *
 * Only missing: top row syms (!@#$%^&*) plus \ | ` ~ &
 * 8-bit keys: - = ; ` \     \ ~
 * Unshifted syms: ` - = ; [ ] \
 * Important shifted syms: : ( ) * _ +
 */
   [_QWERTY] = LAYOUT_planck_grid
   (
    /* {RAISE,KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    RAISE}, */
    NAV_ESC, KC_Q,   KC_W,    KC_E,    KC_R,   KC_T,  KC_Y,  KC_U,   KC_I,    KC_O,      KC_P,       NAV_BSPC,
    CTL_TAB, KC_A,   KC_S,    KC_D,    KC_F,   KC_G,  KC_H,  KC_J,   KC_K,    KC_L,      KC_QUOT,    CTL_ENT ,
    SFT_SCLN,KC_Z,   KC_X,    KC_C,    KC_V,   KC_B,  KC_N,  KC_M,   KC_COMM, KC_DOT,    KC_SLSH,    SFT_MINS,
    SYM_GRV, KC_MENU,KC_COLN, GUI_LBRC,KC_LAPO,KC_SPC,KC_SPC,KC_RAPC,GUI_RBRC,KC_KP_PLUS,TG(_SYMNUM),SYM_EQL

  /* {SYM_EQL, KC_MENU,KC_COLN,GUI_LBRC,KC_LALT,KC_SPC,KC_SPC,KC_RALT,GUI_RBRC,KC_PK_PLUS,BACKLIT,SYM_GRV} */
  /*{SYM_EQL, KC_MENU,KC_GRV, ALT_LPRN,GUI_LBRC, KC_SPC,  KC_SPC,  GUI_RBRC, ALT_LPRN, KC_BSLS, FOO,   SYM_AST}*/
  /* {SYMNUM, KC_MENU, KC_GRV,  GUI_LBRC,KC_LGUI, KC_SPC,  KC_SPC,  KC_RGUI, CTL_RBRC, KC_BSLS, SYMNUM,   SYMNUM} */
    ),

/* SymNum: symbols, numbers (CODING!)
 * https://en.wikipedia.org/wiki/Quotation_marks_in_English#Smart_quotes
 * ,-----------------------------------------------------------------------------.
 * |   ~    |  !  |  @  |  #  |  $  |  %  |  ^  |  1  |  2  |  3  |  0  |  |     |
 * |--------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+--------|
 * |  Ctl   |  &  |  *  |     |     |  {  |  }  |  4  |  5  |  6  |  `  |  Ctl   |
 * |--------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+--------|
 * |        |     |     |  &  |  |  |  <  |  >  |  7  |  8  |  9  |  \  |        |
 * |--------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+--------|
 * | *SYM*  |     |     |     | Alt |     _     | Alt |  .  |  ,  |     | *SYM*  |
 * `-----------------------------------------------------------------------------'

 * ,-----------------------------------------------------------------------------.
 * |   ~    |  !  |  @  |  #  |  $  |  %  |  ^  |  7  |  8  |  9  |  0  |  Bsp   |
 * |--------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+--------|
 * |  Ctl   |  &  |  \  |  —  |  |  |  {  |  }  |  4  |  5  |  6  |  *  |  Ctl   |
 * |--------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+--------|
 * |  ;     |  “  |  ”  |  ‘  |  ’  |  <  |  >  |  1  |  2  |  3  |  /  |   -    |
 * |--------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+--------|
 * | *SYM* `|     |  :  |     | Alt |     _     | Alt |  .  |  +  | SLK | *SYM* =|
 * `-----------------------------------------------------------------------------'
 *
   = & ~
 * f-*: flourish firework/firecracker fizzpop flash flea furry frigo
*/
   [_SYMNUM] = LAYOUT_planck_grid
   (
    KC_TILD, KC_EXLM,   KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_7,   KC_8,   KC_9,    KC_0,    _______,
    _______, KC_AMPR,   KC_BSLS, _______, KC_PIPE, KC_LCBR, KC_RCBR, KC_4,   KC_5,   KC_6,    KC_ASTR, _______,
    _______, KC_LPRN,   KC_RPRN, _______, KC_PIPE, KC_LT,   KC_GT,   KC_1,   KC_2,   KC_3,    KC_SLSH, _______,
  /* {_______, UC(0x007B),_______, _______, KC_PIPE, KC_LT,   KC_GT,   KC_1,   KC_2,   KC_3,    KC_SLSH, _______}, */
    _______, _______,   _______, _______, _______, _______, _______, _______,KC_DOT, KC_PLUS, _______, _______
),

/* NavFun: movement, periphery
 * ,--------+------+------+-------+-------+--------------+------+-------+------+------+------.
 * |  *NAV* | PgUp | Home |  ↑   |  End  | MS1 | Ins  |  F7  |  F8   |  F9  |  Home | *NAV* |
 * |--------+------+------+------+--------+-----+--------------+-------+------+-------+------|
 * |  Ctl   | PgDn |  ←   |  ↓   |  →   | MS2 | Del  |   F4  |  F5  |  F6  |  PgUp |      |
 * |--------+------+------+-------+-------+-----+------+------+-------+------+-------+------|
 * |  Sft   | Vol+ | Mute |  Brt+ | Menu  | MS3 |      |   F1  |  F2  |  F3  | PgDn  | ↑    |
 * |--------+------+------+-------+-------+-------------+------+-------+------+-------+-------|
 * |        | Vol- |      |  Brt- |       |     _       |  F10 |  F11  | F12  | End   | ↓    |
 * `------------------------------------------------------------------------------------------'
 */
   [_NAVFUN] = LAYOUT_planck_grid
   (
    _______, KC_PGUP, KC_HOME, KC_UP,   KC_END,  _______,    KC_INS,  KC_F7,  KC_F8,  KC_F9,  KC_HOME, _______,
    _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______,    KC_DEL,  KC_F4,  KC_F5,  KC_F6,  KC_PGUP, _______,
    _______, KC_VOLU, KC_MUTE, _______, _______, _______,    _______, KC_F1,  KC_F2,  KC_F3,  KC_PGDN, KC_UP,
    _______, KC_VOLD, _______, _______, _______, _______,    _______, KC_F10, KC_F11, KC_F12, KC_END,  KC_DOWN
),




/* Adjust (SymNum + NavFun) -- probably for ISO latin http://kbd-intl.narod.ru/english/layouts
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |  é   |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |  ç   |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

/* Adjust (Lower + Raise) -- probably for ISO latin http://kbd-intl.narod.ru/english/layouts
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|Plover|      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

   [_ADJUST] = LAYOUT_planck_grid
   (
    _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,
    _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK, DVORAK,  PLOVER,  _______,
    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),


};
