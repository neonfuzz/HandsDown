layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = biton32(state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        // R.. = caps
        case _SYMBOLS:
            ergodox_right_led_2_on();
            break;
        case _NUMPAD:
            ergodox_right_led_3_on();
            break;
        case _FKEYS:
        case _INTERNATIONAL:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case _EMOJI:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            if (unicode_config.input_mode != UNICODE_MODE_LINUX) {
                ergodox_right_led_3_on();
            }
            break;
        case _MOUSE:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case _ARROW:
        case _GAMING:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case _GREEK:
        case _QWERTY:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }
    if (capsword_active || allcaps_active || title_active || lampoon_active) {
        ergodox_right_led_1_on();
    }
    return state;
};
