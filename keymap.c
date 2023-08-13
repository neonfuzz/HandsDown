enum layer_names {
    _HDGOLD,
    _SYMBOLS,
    _NUMPAD,
    _FKEYS,
    _MOUSE,
    _ARROW,
    _INTERNATIONAL,
    _UKRANIAN,
    _GREEK,
    _QWERTY,
    _GAMING,
    _EMOJI,
};

#include QMK_KEYBOARD_H
#include "version.h"
#include "caps.c"
#include "backspace.c"
#include "macros.c"
#include "unicode.c"
#include "leds.c"
#include "linger.c"
#include "adaptive.c"
#include "combos.c"
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
        C(KC_S)   , C(KC_W)     , C(KC_Q)     , _______     , _______     , _______, _______,
        _______   , KC_J        , KC_G        , KC_M        , KC_P        , KC_V   , _______,
        C(S(KC_Z)), LCTL_T(KC_R), LGUI_T(KC_S), LALT_T(KC_N), LSFT_T(KC_D), KC_B   ,
        C(KC_Z)   , KC_X        , KC_F        , KC_L        , KC_C        , KC_W   , KC_MEH ,
        C(KC_A)   , C(KC_X)     , C(KC_C)     , C(KC_V)     , TT(_ARROW)  ,
        // left thumb
                           KC_ESC      , OSL(_INTERNATIONAL),
                                         MO(_EMOJI)         ,
        LT(_NUMPAD, KC_T), MO(_SYMBOLS), MO(_FKEYS)         ,
        // right hand
        _______, _______, _______     , _______     , VIMQUIT     , VIMSAVEQUIT , VIMSAVE,
        _______, KC_COLN, KC_DOT      , KC_SLASH    , KC_QUOT     , KC_QUES     , _______,
                 KC_COMM, RSFT_T(KC_A), RALT_T(KC_E), RGUI_T(KC_I), RCTL_T(KC_H), C(KC_R),
        KC_HYPR, KC_UNDS, KC_U        , KC_O        , KC_Y        , KC_K        , KC_U   ,
                          KC_ENT      , VIMPASTE    , VIMCOPY     , VIMCUT      , VIMALL ,
        // right thumb
        OSL(_INTERNATIONAL), KC_TAB ,
        KC_PAUS            ,
        TT(_MOUSE)         , KC_BSPC, LT(_SYMBOLS, KC_SPC)
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
        _______, _______, _______, _______, _______, _______, KC_CAPS,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, LAMPOON,
        _______, _______, _______, _______, _______,
        // left thumb
                      KC_MPLY, KC_VOLU,
                               KC_VOLD,
        C(A(KC_DEL)), _______, _______,
        // right hand
        _______  , _______   , _______    , _______    , _______    , _______, _______,
        TITLECASE, _______   , KC_F7      , KC_F8      , KC_F9      , _______, _______,
                   A(KC_SCRL), KC_SCRL    , KC_F1      , KC_F2      , KC_F3  , _______,
        ALLCAPS  , _______   , KC_F4      , KC_F5      , KC_F6      , _______, _______,
                               C(A(KC_F1)), C(A(KC_F2)), C(A(KC_F3)), _______, _______,
        // right thumb
        _______, _______,
        _______,
        QK_BOOT, _______, _______
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
        _______, _______      , _______    , KC_MS_BTN3, _______    , _______   , _______,
        _______, KC_MS_WH_UP  , KC_MS_BTN1 , KC_MS_UP  , KC_MS_BTN2 , KC_MS_BTN4, _______,
                 KC_MS_WH_DOWN, KC_MS_LEFT , KC_MS_DOWN, KC_MS_RIGHT, KC_MS_BTN5, _______,
        _______, _______      , _______    , _______   , _______    , _______   , _______,
                                _______    , _______   , _______    , _______   , _______,
        // right thumb
        _______, _______,
        _______,
        _______, _______, KC_MS_BTN1
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
        _______, _______   , KC_PGUP, KC_UP  , KC_PGDN, _______   , _______,
                 C(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______,
        _______, _______   , KC_HOME, KC_DOWN, KC_END , _______   , _______,
                             _______, _______, _______, _______   , _______,
        // right thumb
        TO(0)  , _______,
        _______,
        _______, _______, _______
    ),

    [_INTERNATIONAL] = LAYOUT_ergodox(
        // left hand
        _______, _______, _______             , _______             , _______, _______, _______,
        _______, _______, _______             , _______             , _______, _______, _______,
        _______, X(RTM) , XP(ESZETT, ESZETTUP), XP(NTILDE, NTILDEUP), _______, _______,
        _______, _______, _______             , _______             , _______, _______, _______,
        _______, _______, _______             , _______             , _______,
        // left thumb
                 _______, TO(0)        ,
                          TO(_UKRANIAN),
        X(TM),   _______, TO(_GREEK)   ,
        // right hand
        _______, _______, _______         , _______         , _______         , _______   , _______,
        _______, _______, _______         , _______         , KC_GRV          , X(UPQUEST), _______,
                 _______, XP(AACC, AACCUP), XP(EACC, EACCUP), XP(IACC, IACCUP), _______   , _______,
        _______, _______, XP(UACC, UACCUP), XP(OACC, OACCUP), _______         , _______   , _______,
                          _______         , _______         , _______         , _______   , _______,
        // right thumb
        TO(0)      , TO(_QWERTY),
        TO(_GAMING),
        _______    , _______    , _______
    ),

    [_UKRANIAN] = LAYOUT_ergodox(
        // left hand
        _______, _______         , _______         , _______         , _______           , _______         , _______,
        _______, XP(UK_J, UK_JUP), XP(UK_G, UK_GUP), XP(UK_M, UK_MUP), XP(UK_P, UK_PUP)  , XP(UK_V, UK_VUP), _______,
        _______, XP(UK_R, UK_RUP), XP(UK_S, UK_SUP), XP(UK_N, UK_NUP), XP(UK_D, UK_DUP)  , XP(UK_B, UK_BUP),
        _______, XP(UK_X, UK_XUP), XP(UK_F, UK_FUP), XP(UK_L, UK_LUP), XP(UK_CH, UK_CHUP), XP(UK_Z, UK_ZUP), _______,
        _______, _______         , _______         , _______         , _______           ,
        // left thumb
                          _______           , TO(0)                 ,
                                              XP(UK_SHCH, UK_SHCHUP),
        XP(UK_T, UK_TUP), XP(UK_TS, UK_TSUP), XP(UK_SH, UK_SHUP)    ,
        // right hand
        _______, _______               , _______           , _______           , _______           , _______           , _______,
        _______, XP(UK_YU, UK_YUUP)    , XP(UK_YA, UK_YAUP), XP(UK_YE, UK_YEUP), XP(UK_YI, UK_YIUP), XP(UK_YY, UK_YYUP), _______,
                 _______               , XP(UK_A, UK_AUP)  , XP(UK_E, UK_EUP)  , XP(UK_I, UK_IUP)  , XP(UK_H, UK_HUP)  , _______,
        _______, XP(UK_SOFT, UK_SOFTUP), XP(UK_U, UK_UUP)  , XP(UK_O, UK_OUP)  , XP(UK_Y, UK_YUP)  , XP(UK_K, UK_KUP)  , _______,
                                         _______           , _______           , _______           , _______           , _______,
        // right thumb
        TO(0)  , _______,
        _______,
        _______, _______, _______
    ),

    [_GREEK] = LAYOUT_ergodox(
        // left hand
        _______, _______       , _______         , _______         , _______         , _______         , _______,
        _______, XP(XI, XIUP)  , XP(GAMMA, GAMUP), XP(MU, MUUP)    , XP(PI, PIUP)    , XP(OMEGA, OMEUP), _______,
        _______, XP(RHO, RHOUP), XP(SIGMA, SIGUP), XP(NU, NUUP)    , XP(DELTA, DELUP), XP(BETA, BETUP) ,
        _______, XP(CHI, CHIUP), XP(PHI, PHIUP)  , XP(LAMBD, LAMUP), XP(PSI, PSIUP)  , XP(ZETA, ZETUP) , _______,
        _______, _______       , _______         , _______         , _______         ,
        // left thumb
                        _______, TO(0)  ,
                                 _______,
        XP(TAU, TAUUP), _______, _______,
        // right hand
        _______, _______, _______         , _______         , _______         , _______         , _______,
        _______, _______, _______         , _______         , _______         , _______         , _______,
                 _______, XP(ALPHA, ALPUP), XP(EPSIL, EPSUP), XP(IOTA, IOTUP) , XP(ETA, ETAUP)  , _______,
        _______, _______, XP(THETA, THEUP), XP(OMICR, OMIUP), XP(UPSIL, UPSUP), XP(KAPPA, KAPUP), _______,
                          _______         , _______         , _______         , _______         , _______,
        // right thumb
        TO(0)  , _______,
        _______,
        _______, _______, _______
    ),

    [_QWERTY] = LAYOUT_ergodox(
        // left hand
        KC_GRAVE, KC_1   , KC_2   , KC_3   , KC_4   , KC_5, _______,
        KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T, _______,
        _______ , KC_A   , KC_S   , KC_D   , KC_F   , KC_G,
        KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B, _______,
        _______ , _______, _______, _______, _______,
        // left thumb
                 _______, TO(0)  ,
                          _______,
        _______, _______, _______,
        // right hand
        _______, KC_6, KC_7   , KC_8    , KC_9   , KC_0    , KC_MINUS,
        _______, KC_Y, KC_U   , KC_I    , KC_O   , KC_P    , KC_LCBR ,
                 KC_H, KC_J   , KC_K    , KC_L   , KC_SCLN , KC_QUOTE,
        _______, KC_N, KC_M   , KC_COMMA, KC_DOT , KC_SLASH, KC_RSFT ,
                       _______, _______ , _______, _______ , _______ ,
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
        _______, KC_6, KC_7   , KC_8   , KC_9    , KC_0   , _______,
        _______, KC_Y, KC_U   , KC_I   , KC_O    , KC_P   , _______,
                 KC_G, KC_H   , KC_J   , KC_K    , KC_L   , _______,
        _______, KC_B, KC_N   , KC_M   , KC_COMMA, KC_DOT , KC_RSFT,
                       _______, _______, _______ , _______, _______,
        // right thumb
        TO(0)  , _______,
        _______,
        _______, _______, _______
    ),

    /* o-----------------------------o    o-----------------------------o */
    /* |     |   |   |   |   |   |   |    |   |   |   |   |   |   |     | */
    /* |-----+---+---+---+---+---+---|    |---+---+---+---+---+---+-----| */
    /* |     |   |   |   |   |   |   |    |   |   | 😈| 💜| 😍| 🫶 |     | */
    /* |-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----| */
    /* |     | 🐎| 🐐| 🐈|🐕.| 🦝|---|    |---| 😁|.😊| 😛| 😆| 😎|     | */
    /* |-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----| */
    /* |     |   |   |   |   |   |   |    |   | 🫤| 🙃| 🫠| 😅| 🤷| 🤦 | */
    /* o-+---+---+---+---+---+-------o    o---+---+---+---+---+---+---+-o */
    /*   |   |   |   |   |   |                    |   |   |   |   |   |   */
    /*   o-------------------o                    o-------------------o   */
    [_EMOJI] = LAYOUT_ergodox(
        // left hand
        _______, _______ , _______, _______, _______, _______  , _______,
        _______, _______ , _______, _______, _______, _______  , _______,
        _______, X(HARSE), X(GOAT), BCAT   , X(DOG) , X(TPANDA),
        _______, _______ , _______, _______, _______, _______  , _______,
        _______, _______ , _______, _______, _______,
        // left thumb
                 _______, TO(0)  ,
                          _______,
        _______, _______, _______,
        // right hand
        _______, _______ , _______   , _______  , _______     , _______      , _______ ,
        _______, _______ , X(IMP)    , X(HEART) , X(HEARTEYES), X(HEARTHANDS), _______ ,
                 X(GRIN) , X(BLUSH)  , X(TONGUE), X(XD)       , X(SHADES)    , _______ ,
        _______, X(SLANT), X(UPSIDED), X(MELT)  , X(LAUGHCRY) , X(SHRUG)     , X(FPALM),
                          _______    , _______  , _______     , _______      , _______ ,
        // right thumb
        TO(0)  , _______,
        _______,
        _______, _______, UCMOD
    ),
};
