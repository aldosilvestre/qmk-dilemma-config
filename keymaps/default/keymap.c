/* Copyright 2022 LXF-YZP(yuezp)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNKCS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licensKC/>.
 */

#include QMK_KEYBOARD_H

#define LAYER_INDICATOR_BRIGHTNESS_INC 22
#define CAPSLOCK_INDICATOR_BRIGHTNESS_INC 76

enum layer_namKC {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

enum {
    TD_CAPLOCK,
} td_state_t;

#define CAP_LOC TD(TD_CAPLOCK)

tap_dance_action_t tap_dance_actions[] = {
    [TD_CAPLOCK] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] =	LAYOUT(
        KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,   KC_0,  KC_MINS,
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        CAP_LOC,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                      KC_NO,     KC_LCTL,   KC_LGUI,   MO(1),  KC_SPC,    KC_ENT,   MO(2),  KC_LALT,   KC_NO,  KC_MUTE
                                //`----------------------------------'  `------------------------------------'
	),

    [_LOWER] =	LAYOUT(
        KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME,  KC_END,                       KC_INS, KC_HOME,  KC_DEL,  KC_END, KC_PGUP, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, MS_BTN1, MS_BTN2, MS_BTN3, KC_RALT,   KC_NO,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_PGDN, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______,   KC_NO,   KC_NO,   KC_NO, KC_PGUP, KC_PGDN,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                        _______,  _______,  KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(3), _______, _______, _______
                                //`-----------------------------------'  `----------------------------------'
	),
	[_RAISE] =	LAYOUT(
         KC_ESC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_PAST, KC_PSLS,   KC_NO,   KC_NO,   KC_NO, KC_BSPC,
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_TAB, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,                      KC_PLUS,    KC_7,    KC_8,    KC_9, KC_TILD, KC_DEL,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______,  KC_DLR, KC_PERC, KC_CIRC, KC_LCBR, KC_RCBR,                      KC_PMNS,    KC_4,    KC_5,    KC_6,    KC_0, KC_QUOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______, KC_EXLM,   KC_AT, KC_HASH, KC_LBRC, KC_RBRC,                       KC_EQL,    KC_1,    KC_2,    KC_3, KC_UNDS, KC_BSLS,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                         _______,  _______,  KC_LGUI,  MO(3),  KC_SPC,     KC_ENT, _______,  _______, _______, _______
                                //`----------------------------------'  `------------------------------------'
	),
   [_ADJUST] =	LAYOUT(
          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_PSCR,  KC_APP,  KC_INS,   KC_NO,   KC_NO, KC_BSPC,
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RM_TOGG, RM_HUEU, RM_SATU, RM_SPDU, RM_VALU,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RM_NEXT, RM_HUED, RM_SATD, RM_SPDD, RM_VALD,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                         _______,   _______, KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, _______, KC_LALT, _______
                                 //`---------------------------------'  `-----------------------------------'
	)

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP) },
    [_LOWER] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [_RAISE] = { ENCODER_CCW_CW(KC_MS_WH_LEFT, KC_MS_WH_RIGHT), ENCODER_CCW_CW(_______, _______) },
    [_ADJUST] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) }
};
#endif

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
		if (host_keyboard_led_state().caps_lock) {
			rgb_matrix_set_color_all(0,255,0);
		}
	return false;
}
