static bool caps_lock       = false;
static bool capsword_active = false;
static bool allcaps_active  = false;
static bool title_active    = false;
static bool lampoon_active  = false;

static bool last_key_was_space = false;

#define ALL 0
#define WORD 1
#define TITLE 2
#define LAMP 3

void caps_set(int mode) {
    switch (mode) {
        case ALL:
            allcaps_active  = true;
            capsword_active = false;
            title_active    = false;
            lampoon_active  = false;
            break;
        case WORD:
            allcaps_active  = false;
            capsword_active = true;
            title_active    = false;
            lampoon_active  = false;
            break;
        case TITLE:
            allcaps_active     = false;
            capsword_active    = false;
            title_active       = true;
            lampoon_active     = false;
            last_key_was_space = true;
            break;
        case LAMP:
            allcaps_active  = false;
            capsword_active = false;
            title_active    = false;
            lampoon_active  = true;
            break;
    }
    if (!caps_lock) {
        tap_code(KC_CAPS);
        caps_lock = true;
    }
    ergodox_right_led_1_on();
}

void caps_unset(void) {
    allcaps_active     = false;
    capsword_active    = false;
    title_active       = false;
    lampoon_active     = false;
    last_key_was_space = false;

    if (caps_lock) {
        tap_code(KC_CAPS);
        caps_lock = false;
    }
    ergodox_right_led_1_off();
}

void allcaps_toggle(void) {
    if (allcaps_active) {
        caps_unset();
    } else {
        caps_set(ALL);
    }
}

void capsword_toggle(void) {
    if (capsword_active) {
        caps_unset();
    } else {
        caps_set(WORD);
    }
}

void title_toggle(void) {
    if (title_active) {
        caps_unset();
    } else {
        caps_set(TITLE);
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
                last_key_was_space = true;
                break;
            default:
                if (lampoon_active) {
                    caps_lock = !caps_lock;
                    tap_code(KC_CAPS);
                } else if (title_active) {
                    if (last_key_was_space) {
                        if (!caps_lock) {
                            caps_lock = true;
                            tap_code(KC_CAPS);
                        }
                    } else if (caps_lock) {
                        caps_lock = false;
                        tap_code(KC_CAPS);
                    }
                }
                last_key_was_space = false;
        }
    }
    return true;
}
