#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT_reviung34(KC_Q, KC_P, KC_L, KC_C, KC_J, KC_X, KC_F, KC_O, KC_U, KC_SLSH, LALT_T(KC_R), LGUI_T(KC_N), LSFT_T(KC_T), LCTL_T(KC_S), KC_G, KC_Y, LCTL_T(KC_H), LSFT_T(KC_E), LGUI_T(KC_I), LALT_T(KC_A), KC_Z, KC_B, KC_M, KC_W, KC_V, KC_K, KC_D, KC_QUOT, KC_COMM, KC_DOT, MO(1), KC_SPC, MO(2), MO(3)),

[_LAYER1] = LAYOUT_reviung34(KC_NO, KC_INS, KC_APP, KC_PSCR, KC_NO, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_NO, KC_NO, KC_NO, KC_CAPS, KC_NO, KC_NO, KC_BSPC, KC_TAB, KC_ESC, KC_NO, KC_TRNS, KC_NO, KC_ENT, MO(4)),

[_LAYER2] = LAYOUT_reviung34(KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_EQL, KC_7, KC_8, KC_9, KC_PLUS, LALT_T(KC_SCLN), LGUI_T(KC_COLN), LSFT_T(KC_LCBR), LCTL_T(KC_LPRN), KC_LBRC, KC_ASTR, LCTL_T(KC_4), LSFT_T(KC_5), LGUI_T(KC_6), LALT_T(KC_MINS), KC_CIRC, KC_AMPR, KC_RCBR, KC_RPRN, KC_RBRC, KC_0, KC_1, KC_2, KC_3, KC_SLSH, KC_NO, KC_NO, KC_TRNS, KC_NO),

[_LAYER3] = LAYOUT_reviung34(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_TILD, KC_BSLS, KC_PIPE, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MO(4), KC_NO, KC_NO, KC_TRNS),

[_LAYER4] = LAYOUT_reviung34(KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_COLN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_COLN);
                return false;
            }
            break;
        case LSFT_T(KC_LCBR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LCBR);
                return false;
            }
            break;
        case LCTL_T(KC_LPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN);
                return false;
            }
            break;
    }
    return true;
}