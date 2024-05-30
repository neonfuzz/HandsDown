enum layers {
    _HDGOLD,
    _SYMBOLS,
    _NUMPAD,
    _MOUSE,
    _ARROW
};


#include QMK_KEYBOARD_H
#include "version.h"
#include "erg_to_ml.c"
#include "layouts/community/hands_down_gold/hdgold.c"
#include "leds.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_HDGOLD] = LAYOUT_moonlander(
        C(KC_S)   , C(KC_W)     , C(KC_Q)     , _______     , _______     , _______     , _______   ,       _______, _______, _______     , _______     , VIMQUIT     , VIMSAVEQUIT , VIMSAVE,
        _______   , KC_J        , KC_G        , KC_M        , KC_P        , KC_V        , _______   ,       _______, KC_COLN, KC_DOT      , KC_SLASH    , KC_QUOT     , KC_QUES     , _______,
        C(S(KC_Z)), LCTL_T(KC_R), LGUI_T(KC_S), LALT_T(KC_N), LSFT_T(KC_D), KC_B        , KC_MEH    ,       KC_HYPR, KC_COMM, RSFT_T(KC_A), RALT_T(KC_E), RGUI_T(KC_I), RCTL_T(KC_H), C(KC_R),
        C(KC_Z)   , KC_X        , KC_F        , KC_L        , KC_C        , KC_W        ,                            KC_UNDS, KC_U        , KC_O        , KC_Y        , KC_K        , KC_U   ,
        C(KC_A)   , C(KC_X)     , C(KC_C)     , C(KC_V)     , TT(_ARROW)  ,               KC_ESC    ,       KC_TAB ,          KC_ENT      , VIMPASTE    , VIMCOPY     , VIMCUT      , VIMALL ,
                                                         LT(_NUMPAD, KC_T), MO(_SYMBOLS), TT(_MOUSE),       KC_PAUS, KC_BSPC, LT(_SYMBOLS, KC_SPC)
    ),
    [_SYMBOLS] = LAYOUT_moonlander(
        _______, _______, KC_CIRC, KC_HASH, KC_DLR , _______, _______,       _______, _______, _______, KC_AT  , KC_GRV , _______, _______,
        _______, _______, LABK   , KC_MINS, KC_RABK, _______, _______,       _______, _______, KC_LCBR, KC_SCLN, KC_RCBR, _______, _______,
        _______, KC_BSLS, KC_LPRN, KC_EQL , KC_RPRN, KC_PLUS, _______,       _______, KC_PERC, KC_LBRC, KC_UNDS, KC_RBRC, KC_EXLM, _______,
        _______, _______, KC_ASTR, KC_COLN, KC_SLSH, _______,                         _______, KC_PIPE, KC_TILD, KC_AMPR, _______, _______,
        _______, _______, _______, _______, _______,          _______,       _______,          _______, _______, _______, _______, _______,
                                            _______, _______, _______,       _______, _______, _______
    ),
    [_NUMPAD] = LAYOUT_moonlander(
        _______, _______, _______, _______, _______, _______, _______,       _______, _______, KC_ASTR, KC_PLUS, KC_MINS, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,       _______, _______, KC_7   , KC_8   , KC_9   , _______, _______,
        _______, _______, _______, _______, _______, _______, _______,       _______, KC_DLR , KC_0   , KC_1   , KC_2   , KC_3   , _______,
        _______, _______, _______, _______, _______, _______,                         _______, KC_4   , KC_5   , KC_6   , _______, _______,
        _______, _______, _______, _______, _______,          _______,       _______,          _______, _______, _______, _______, _______,
                                            _______, _______, _______,       _______, _______, _______
    ),
    [_MOUSE] = LAYOUT_moonlander(
        _______, _______   , _______   , KC_MS_BTN3, _______    , _______   , _______,       _______, _______      , _______   , KC_MS_BTN3, _______    , _______, _______,
        _______, KC_MS_BTN4, KC_MS_BTN1, KC_MS_UP  , KC_MS_BTN2 , KC_MS_BTN4, _______,       _______, KC_MS_WH_UP  , KC_MS_BTN1, KC_MS_UP  , KC_MS_BTN2 , KC_MS_BTN4, _______,
        _______, KC_MS_BTN5, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_BTN5, _______,       _______, KC_MS_WH_DOWN, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_BTN5, _______,
        _______, _______   , _______   , _______   , _______    , _______   ,                         _______      , _______   , _______   , _______    , _______, _______,
        _______, _______   , _______   , _______   , _______    ,             _______,       _______,                _______   , _______   , _______    , _______, _______,
                                                     _______    , _______   , _______,       _______, _______      , _______
    ),
    [_ARROW] = LAYOUT_moonlander(
        _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______,       _______, KC_6      , KC_7   , KC_8   , KC_9   , KC_0      , _______,
        _______, KC_NO  , KC_Q   , KC_W   , KC_E   , KC_R   , _______,       _______, _______   , KC_PGUP, KC_UP  , KC_PGDN, _______   , _______,
        _______, KC_A   , KC_NO  , KC_S   , KC_D   , _______, _______,       _______, C(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______,
        _______, _______, _______, _______, _______, _______,                         _______   , KC_HOME, KC_DOWN, KC_END , _______   , _______,
        _______, _______, _______, _______, _______,          _______,       _______,             _______, _______, _______, _______   , _______,
                                            _______, _______, _______,       _______, _______   , _______
    ),
};
