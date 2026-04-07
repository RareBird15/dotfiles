#include QMK_KEYBOARD_H
#include "keychron_common.h"


/* * Lanie's Custom Keymap for K10 Max
 * Optimized for: Total Blindness, RA/Fatigue, and Python/C Development.
 * Features: One-Shot Modifiers (OSM) and One-Shot Layer (OSL).
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0: Base Layer */
[0] = LAYOUT_ansi_108(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_PSCR, KC_SCRL, KC_PAUS, KC_APP, LALT(KC_F4), LWIN(KC_D), KC_SLEP,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN, KC_P7,   KC_P8,   KC_P9,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,           KC_ENT,                               KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    OSM(MOD_LSFT),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,           KC_RSFT,          KC_UP,             KC_P1,   KC_P2,   KC_P3,
    OSM(MOD_LCTL), KC_LGUI, OSM(MOD_LALT),                  KC_SPC,                    KC_RALT, KC_RGUI, OSL(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,            KC_PDOT, KC_PENT
),

/* Layer 1: Symbol & Media Layer */
[1] = LAYOUT_ansi_108(
    _______, KC_BRID,   KC_BRIU, KC_TASK, KC_FILE, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,          _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_GRV,  _______, KC_LBRC, KC_RBRC, _______, _______, _______, _______, _______, _______, KC_LCBR, KC_RCBR, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, KC_LPRN, KC_RPRN, _______, _______, _______, _______, _______, _______, _______,           _______,                               _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,          _______,           _______, _______, _______,
    _______, _______, _______,                  _______,                    _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______
)
};
