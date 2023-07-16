enum custom_keycodes {
    ALLCAPS = SAFE_RANGE,
    CAPWRD,
    TITLECASE,
    LAMPOON,
    VIMALL,
    VIMCUT,
    VIMCOPY,
    VIMPASTE,
    VIMSAVE,
    VIMSAVEQUIT,
    VIMQUIT,
    BCAT,  // 🐈‍⬛
    UCMOD, // UC_MOD with LED support
    LABK,  // <
};

bool process_macro_user(uint16_t keycode, const keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case ALLCAPS:
                allcaps_toggle();
                return false;
            case CAPWRD:
                capsword_toggle();
                return false;
            case TITLECASE:
                title_toggle();
                return false;
            case LAMPOON:
                lampoon_toggle();
                return false;
            case VIMALL:
                send_string("ggVG");
                return false;
            case VIMCUT:
                send_string("\"+x");
                return false;
            case VIMCOPY:
                send_string("\"+y");
                return false;
            case VIMPASTE:
                send_string("\"+p");
                return false;
            case VIMSAVE:
                send_string(":w");
                tap_code16(KC_ENT);
                return false;
            case VIMSAVEQUIT:
                send_string(":wq");
                tap_code16(KC_ENT);
                return false;
            case VIMQUIT:
                send_string(":q!");
                tap_code16(KC_ENT);
                return false;
            case BCAT:
                send_unicode_string("🐈‍⬛");
                return false;
            case UCMOD:
                cycle_unicode_input_mode(1);
                if (unicode_config.input_mode == UNICODE_MODE_LINUX) {
                    ergodox_right_led_3_off();
                } else {
                    ergodox_right_led_3_on();
                }
                return false;
            case LABK:
                tap_code16(KC_LABK);
                return false;
        }
    }
    return true;
}
