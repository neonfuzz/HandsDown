enum layer_names {
    _HDGOLD,
    _SYMBOLS,
    _NUMPAD,
    _FKEYS,
    _MOUSE,
    _ARROW,
    _INTERNATIONAL,
    _QWERTY,
    _GAMING,
};

#include QMK_KEYBOARD_H
#include "version.h"
#include "capsword.c"
#include "macros.c"
#include "combos.c"
#include "leds.c"
#include "linger.c"
#include "adaptive.c"
#include "overrides.c"
#include "MATRIX_SCAN.c"
#include "PROCESS_RECORD.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ,--------------------------------------------------.    ,--------------------------------------------------.
     * |    0   |   1  |   2  |   3  |   4  |   5  |  6   |    |  38  |  39  |  40  |  41  |  42  |  43  |   44   |
     * |--------+------+------+------+------+------+------|    |------+------+------+------+------+------+--------|
     * |    7   |   8  |   9  |  10  |  11  |  12  |  13  |    |  45  |  46  |  47  |  48  |  49  |  50  |   51   |
     * |--------+------+------+------+------+------|      |    |      |------+------+------+------+------+--------|
     * |   14   |  15  |  16  |  17  |  18  |  19  |------|    |------|  52  |  53  |  54  |  55  |  56  |   57   |
     * |--------+------+------+------+------+------|  26  |    |  58  |------+------+------+------+------+--------|
     * |   20   |  21  |  22  |  23  |  24  |  25  |      |    |      |  59  |  60  |  61  |  62  |  63  |   64   |
     * `--------+------+------+------+------+-------------'    `-------------+------+------+------+------+--------'
     *   |  27  |  28  |  29  |  30  |  31  |                                |  65  |  66  |  67  |  68  |  69  |
     *   `----------------------------------'                                `----------------------------------'
     *                                       ,-------------.  ,-------------.
     *                                       |  32  |  33  |  |  70  |  71  |
     *                                ,------+------+------|  |------+------+------.
     *                                |      |      |  34  |  |  72  |      |      |
     *                                |  35  |  36  |------|  |------|  74  |  75  |
     *                                |      |      |  37  |  |  73  |      |      |
     *                                `--------------------'  `--------------------'
     */

    [_HDGOLD] = LAYOUT_ergodox(
        // left hand
        C(KC_S)   , HEART       , HEARTEYES   , SHADES      , GRIN        , UPSIDED, SHRUG  ,
        C(KC_W)   , KC_J        , KC_G        , KC_M        , KC_P        , KC_V   , _______,
        C(KC_Q)   , LCTL_T(KC_R), LGUI_T(KC_S), LALT_T(KC_N), LSFT_T(KC_D), KC_B   ,
        C(S(KC_Z)), KC_X        , KC_F        , KC_L        , KC_C        , KC_W   , KC_MEH ,
        C(KC_A)   , C(KC_C)     , C(KC_V)     , C(KC_Z)     , TT(5)       ,
        // left thumb
                     KC_ESC , OSL(6) ,
                              _______,
        LT(2, KC_T), MO(1)  , MO(3)  ,
        // right hand
        IMP    , TPANDA , HARSE       , GOAT        , BCAT        , DOG         , VIMSAVE    ,
        _______, KC_COLN, KC_DOT      , KC_SLASH    , KC_QUOT     , KC_QUES     , VIMSAVEQUIT,
                 KC_COMM, RSFT_T(KC_A), RALT_T(KC_E), RGUI_T(KC_I), RCTL_T(KC_H), VIMQUIT    ,
        KC_HYPR, KC_UNDS, KC_U        , KC_O        , KC_Y        , KC_K        , C(KC_R)    ,
                          KC_ENT      , KC_U        , VIMPASTE    , VIMCOPY     , VIMALL     ,
        // right thumb
        OSL(6) , KC_TAB ,
        KC_PAUS,
        TT(4)  , KC_BSPC, LT(1, KC_SPC)
    ),

    [_SYMBOLS] = LAYOUT_ergodox(
        // left hand
        _______, _______, KC_CIRC, KC_HASH, KC_DLR , _______, _______,
        _______, _______, LABK   , KC_MINS, KC_RABK, _______, _______,
        _______, KC_BSLS, KC_LPRN, KC_EQL , KC_RPRN, KC_PLUS,
        _______, _______, KC_ASTR, KC_COLN, KC_SLSH, _______, _______,
        _______, _______, _______, _______, _______,
        // left thumb
                 _______, _______,
                          _______,
        _______, _______, _______,
        // right hand
        _______, _______, _______, KC_AT  , KC_GRV , _______, _______,
        _______, _______, KC_LCBR, KC_SCLN, KC_RCBR, _______, _______,
                 KC_PERC, KC_LBRC, KC_UNDS, KC_RBRC, KC_EXLM, _______,
        _______, _______, KC_PIPE, KC_TILD, KC_AMPR, _______, _______,
                          _______, _______, _______, _______, _______,
        // right thumb
        _______, _______,
        _______,
        _______, _______, _______
    ),

    [_NUMPAD] = LAYOUT_ergodox(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        // left thumb
                 _______, _______,
                          _______,
        _______, _______, _______,
        // right hand
        _______, _______, KC_ASTR, KC_PLUS, KC_MINS, _______, _______,
        _______, _______, KC_7   , KC_8   , KC_9   , _______, _______,
                 KC_DLR , KC_0   , KC_1   , KC_2   , KC_3   , _______,
        _______, _______, KC_4   , KC_5   , KC_6   , _______, _______,
                          _______, _______, _______, _______, _______,
        // right thumb
        _______, _______,
        _______,
        _______, _______, _______
    ),

    [_FKEYS] = LAYOUT_ergodox(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        // left thumb
                      _______, KC_VOLU,
                               KC_VOLD,
        C(A(KC_DEL)), _______, _______,
        // right hand
        _______, _______   , _______    , _______    , _______    , _______, _______,
        _______, _______   , KC_F7      , KC_F8      , KC_F9      , _______, _______,
                 A(KC_SCRL), KC_SCRL    , KC_F1      , KC_F2      , KC_F3  , _______,
        KC_CAPS, _______   , KC_F4      , KC_F5      , KC_F6      , _______, _______,
                             C(A(KC_F1)), C(A(KC_F2)), C(A(KC_F3)), _______, _______,
        // right thumb
        _______, _______,
        _______,
        RESET  , _______, UC_MOD
    ),

    [_MOUSE] = LAYOUT_ergodox(
        // left hand
        _______, _______   , _______   , KC_MS_BTN3, _______    , _______      , _______,
        _______, KC_MS_BTN4, KC_MS_BTN2, KC_MS_UP  , KC_MS_BTN1 , KC_MS_WH_UP  , _______,
        _______, KC_MS_BTN5, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_WH_DOWN,
        _______, _______   , _______   , _______   , _______    , _______      , _______,
        _______, _______   , _______   , _______   , _______    ,
        // left thumb
                    _______, _______,
                             _______,
        KC_MS_BTN1, _______, _______,
        // right hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
                 _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,
        // right thumb
        _______, _______,
        _______,
        _______, _______, _______
    ),

    [_ARROW] = LAYOUT_ergodox(
        // left hand
        _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______,
        _______, KC_NO  , KC_Q   , KC_W   , KC_E   , KC_R   , _______,
        _______, KC_A   , KC_NO  , KC_S   , KC_D   , _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        // left thumb
                 _______, TO(0)  ,
                          _______,
        _______, _______, _______,
        // right hand
        _______, KC_6      , KC_7   , KC_8   , KC_9   , KC_0      , _______,
        _______, _______   , KC_PGUP, KC_UP  , KC_HOME, _______   , _______,
                 C(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______,
        _______, _______   , KC_PGDN, KC_DOWN, KC_END , _______   , _______,
                             _______, _______, _______, _______   , _______,
        // right thumb
        TO(0)  , _______,
        _______,
        _______, _______, _______
    ),

    [_INTERNATIONAL] = LAYOUT_ergodox(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, RTM    , ESZETT , NTILDE , _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,
        // left thumb
            _______, TO(0)  ,
                     _______,
        TM, _______, _______,
        // right hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, KC_GRV , UPQUEST, _______,
                 _______, AACCENT, EACCENT, IACCENT, _______, _______,
        _______, _______, UACCENT, OACCENT, _______, _______, _______,
                          _______, _______, _______, _______, _______,
        // right thumb
        TO(0)  , TO(7)  ,
        TO(8)  ,
        _______, _______, _______
    ),

    [_QWERTY] = LAYOUT_ergodox(
        // left hand
        KC_GRAVE , KC_1   , KC_2   , KC_3   , KC_4   , KC_5, _______,
        KC_TAB   , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T, _______,
        _______  , KC_A   , KC_S   , KC_D   , KC_F   , KC_G,
        KC_LSHIFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B, _______,
        _______  , _______, _______, _______, _______,
        // left thumb
                 _______, TO(0)  ,
                          _______,
        _______, _______, _______,
        // right hand
        _______, KC_6, KC_7   , KC_8    , KC_9   , KC_0     , KC_MINUS ,
        _______, KC_Y, KC_U   , KC_I    , KC_O   , KC_P     , KC_LCBR  ,
                 KC_H, KC_J   , KC_K    , KC_L   , KC_SCOLON, KC_QUOTE ,
        _______, KC_N, KC_M   , KC_COMMA, KC_DOT , KC_SLASH , KC_RSHIFT,
                       _______, _______ , _______, _______  , _______  ,
        // right thumb
        TO(0)  , _______,
        _______,
        _______, _______, _______
    ),

    [_GAMING] = LAYOUT_ergodox(
        // left hand
        _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5, _______,
        _______, KC_NO  , KC_Q   , KC_W   , KC_E   , KC_R, _______,
        _______, KC_A   , KC_NO  , KC_S   , KC_D   , KC_F,
        _______, KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V, _______,
        _______, _______, _______, _______, _______,
        // left thumb
                 _______, TO(0)  ,
                          _______,
        _______, _______, _______,
        // right hand
        _______, KC_6, KC_7   , KC_8   , KC_9    , KC_0   , _______  ,
        _______, KC_Y, KC_U   , KC_I   , KC_O    , KC_P   , _______  ,
                 KC_G, KC_H   , KC_J   , KC_K    , KC_L   , _______  ,
        _______, KC_B, KC_N   , KC_M   , KC_COMMA, KC_DOT , KC_RSHIFT,
                       _______, _______, _______ , _______, _______  ,
        // right thumb
        TO(0)  , _______,
        _______,
        _______, _______, _______
    ),
};
