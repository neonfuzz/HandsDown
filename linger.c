// ---------------------------------
// Track qualities of lingering key.
// ---------------------------------
static uint16_t linger_keycode = KC_NO;
static uint32_t linger_keydown = 0;
static bool     linger_shift   = false;

void enable_linger_shift(void) {
    if (capsword_active) {
        capsword_unset();
    }
    register_code(KC_RSFT);
    linger_shift = true;
}

void disable_linger_shift(void) {
    unregister_code(KC_RSFT);
    linger_shift = false;
}

// ---------------------
// On key press/release:
// ---------------------
bool process_linger_user(uint16_t keycode, const keyrecord_t *record) {
    switch (keycode) {
        case KC_C:    // COM if lingered
        case KC_K:    // KE if lingered
        case KC_O:    // OWN if lingered
        case KC_Q:    // QU if lingered
        case LABK:    // <|> if lingered
        case KC_LBRC: // [|] if lingered
        case KC_LCBR: // {|} if lingered
        case KC_LPRN: // (|) if lingered
        case KC_QUOT: // '|' if lingered
        case KC_DQUO: // "|" if lingered
        case KC_DOT:  // (dot)(space)(shift) if lingered
        case KC_QUES: // ?(space)(shift) if lingered
            if (record->event.pressed) {
                linger_keycode = keycode;
                linger_keydown = timer_read32();
            } else {
                linger_keycode = KC_NO;
                linger_keydown = 0;
            }
            break;
    }

    // If we're shifted from previously lingering on ".",
    // then tap our key, stop shifting, and exit.
    if (linger_shift & record->event.pressed) {
        tap_code16(keycode);
        disable_linger_shift();
        return false;
    }

    return true;
}

// ---------------------------------
// Every time the matrix is scanned:
// ---------------------------------
void matrix_linger_user(void) {
    if (timer_elapsed32(linger_keydown) > LINGER_TERM) {
        switch (linger_keycode) {
            // If we are lingering on a linger key,
            // then do the linger action.
            case KC_C:
                clear_mods();
                send_string("om");
                break;
            case KC_K:
                clear_mods();
                tap_code(KC_E);
                break;
            case KC_O:
                clear_mods();
                send_string("wn");
                break;
            case KC_Q:
                clear_mods();
                tap_code(KC_U);
                break;
            case LABK:
                clear_mods();
                tap_code16(KC_RABK);
                tap_code16(KC_LEFT);
                break;
            case KC_LCBR:
                clear_mods();
                tap_code16(KC_RCBR);
                tap_code16(KC_LEFT);
                break;
            case KC_LBRC:
                clear_mods();
                tap_code16(KC_RBRC);
                tap_code16(KC_LEFT);
                break;
            case KC_LPRN:
                clear_mods();
                tap_code16(KC_RPRN);
                tap_code16(KC_LEFT);
                break;
            case KC_QUOT:
                tap_code16(KC_QUOT);
                uint32_t mods = get_mods();
                clear_mods();
                tap_code16(KC_LEFT);
                set_mods(mods);
                break;
            case KC_DQUO:
                tap_code16(KC_DQUO);
                // "LEFT" is handled by the "QUOTE" case.
                break;
            case KC_DOT:
            case KC_QUES:
                // Also handles KC_EXLM.
                if (capsword_active) {
                    capsword_unset();
                }
                tap_code(KC_SPC);
                enable_linger_shift();
                break;
        }
        // If we've pressed another key,
        // then stop timing our linger.
        linger_keycode = KC_NO;
        linger_keydown = 0;
    }
}
