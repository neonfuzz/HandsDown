static bool capsword_active = false;

void capsword_set(void) {
    capsword_active = true;
    tap_code(KC_CAPS);
    ergodox_right_led_1_on();
}

void capsword_unset(void) {
    capsword_active = false;
    tap_code(KC_CAPS);
    ergodox_right_led_1_off();
}

void capsword_toggle(void) {
    if (capsword_active) {
        capsword_unset();
    } else {
        capsword_set();
    }
}

bool process_capsword_user(uint16_t keycode, const keyrecord_t *record) {
    if (capsword_active) {
        if (record->event.pressed) {
            switch (keycode) {
                case KC_SPC:
                case KC_ESC:
                case KC_ENT:
                    capsword_unset();
                    break;
            }
        }
    }
    return true;
}
