bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool return_state = true;

    // Let QMK handle gaming layers. No need for fancy stuff.
    if (IS_LAYER_ON(_GAMING) | IS_LAYER_ON(_ARROW)) {
        return true;
    }

    switch (keycode) {
        case QK_MOD_TAP ... QK_MOD_TAP_MAX:
        case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            if (record->tap.count == 0) // If not tapped yet,
                return true;            // let QMK handle it first.
            keycode &= QK_BASIC_MAX;    // Trim mods + taps.
            break;
    }

    if (!process_caps_user(keycode, record)) {
        return false; // We have declared no more processing.
    }

    if (!process_linger_user(keycode, record)) {
        return false; // We have declared no more processing.
    }

    if (!process_adaptive_user(keycode, record)) {
        return false; // We have declared no more processing.
    }

    if (!process_macro_user(keycode, record)) {
        return false; // We have declared no more processing.
    }

    return return_state;
}
