// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BL,
    _LL,
    _RL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_NO,
        KC_GRV,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_VOLD,
        KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_HOME,
        KC_NO,      KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_END,
        KC_LBRC,    KC_NO,      KC_LEFT,    KC_RIGHT,   KC_TAB,     KC_SPC,     KC_LSFT,
                                                        KC_LGUI,    KC_LALT,    KC_LCTL,    MO(_LL),

                                                            
                    KC_NO,      KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_EQL,
                    KC_VOLU,    KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
                    KC_PGUP,    KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
                    KC_PGDN,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_MINS,
                    KC_RSFT,    KC_ENT,     KC_BSPC,    KC_DOWN,    KC_UP,      KC_NO,      KC_RBRC,
        MO(_RL),     KC_RCTL,    KC_RALT,    KC_DEL
    ),
    [_LL] = LAYOUT(
        QK_BOOT,    KC_F1,      KC_F2,       KC_F3,     KC_F4,      KC_F5,       _______,
        QK_RBT,     KC_F11,     KC_F12,      KC_F13,    KC_F14,     KC_F15,      _______,
        _______,    _______,    _______,     _______,   _______,    _______,     _______,
        _______,    _______,    _______,     _______,   _______,    _______,     _______,
        _______,    _______,    _______,     _______,   _______,    _______,     _______,
                                                        _______,    _______,     _______,   _______,

                                                            
                    _______,    KC_F6,       KC_F7,     KC_F8,      KC_F9,       KC_F10,    QK_BOOT,
                    _______,    KC_F16,      KC_F17,    KC_F18,     KC_F19,      KC_F20,    QK_RBT,
                    _______,    _______,     _______,   _______,    _______,     _______,   _______,
                    _______,    _______,     _______,   _______,    _______,     _______,   _______,
                    _______,    _______,     _______,   _______,    _______,     _______,   _______,
        _______,    _______,    _______,     _______
    ),
    [_RL] = LAYOUT(
        QK_BOOT,    KC_F1,      KC_F2,       KC_F3,     KC_F4,      KC_F5,       _______,
        QK_RBT,     KC_F11,     KC_F12,      KC_F13,    KC_F14,     KC_F15,      _______,
        _______,    _______,    _______,     _______,   _______,    _______,     _______,
        _______,    _______,    _______,     _______,   _______,    _______,     _______,
        _______,    _______,    _______,     _______,   _______,    _______,     _______,
                                                        _______,    _______,     _______,   _______,

                                                            
                    _______,    KC_F6,       KC_F7,     KC_F8,      KC_F9,       KC_F10,    QK_BOOT,
                    _______,    KC_F16,      KC_F17,    KC_F18,     KC_F19,      KC_F20,    QK_RBT,
                    _______,    _______,     _______,   _______,    _______,     _______,   _______,
                    _______,    _______,     _______,   _______,    _______,     _______,   _______,
                    _______,    _______,     _______,   _______,    _______,     _______,   _______,
        _______,    _______,    _______,     _______
    )
};