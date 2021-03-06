static bool caps_lock       = false;
static bool capsword_active = false;
static bool allcaps_active  = false;
static bool lampoon_active  = false;

#define ALL 0
#define WORD 1
#define LAMP 2

void caps_set(int mode) {
    switch (mode) {
        case ALL:
            allcaps_active  = true;
            capsword_active = false;
            lampoon_active  = false;
            break;
        case WORD:
            allcaps_active  = false;
            capsword_active = true;
            lampoon_active  = false;
            break;
        case LAMP:
            allcaps_active  = false;
            capsword_active = false;
            lampoon_active  = true;
            break;
    }
    if (!caps_lock) {
        tap_code(KC_CAPS);
        caps_lock = true;
        ergodox_right_led_1_on();
    }
}

void caps_unset(void) {
    allcaps_active  = false;
    capsword_active = false;
    lampoon_active  = false;
    if (caps_lock) {
        tap_code(KC_CAPS);
        caps_lock = false;
        ergodox_right_led_1_off();
    }
}

void capsword_toggle(void) {
    if (capsword_active) {
        caps_unset();
    } else {
        caps_set(WORD);
    }
}

void allcaps_toggle(void) {
    if (allcaps_active) {
        caps_unset();
    } else {
        caps_set(ALL);
    }
}

void lampoon_toggle(void) {
    if (lampoon_active) {
        caps_unset();
    } else {
        caps_set(LAMP);
    }
}

bool process_caps_user(uint16_t keycode, const keyrecord_t* record) {
    if (record->event.pressed) {
        switch (keycode) {
            case KC_ESC:
            case KC_ENT:
                caps_unset();
                break;
            case KC_SPC:
                if (capsword_active) {
                    caps_unset();
                }
                break;
            default:
                if (lampoon_active) {
                    caps_lock = !caps_lock;
                    tap_code(KC_CAPS);
                }
        }
    }
    return true;
}
