static uint8_t backspace_amt = 1;

bool process_backspace_user(uint16_t keycode, const keyrecord_t *record) {
    uint8_t i;
    if (keycode == KC_BSPC && record->event.pressed) {
        for (i = 1; i < backspace_amt; ++i) {
            tap_code(KC_BSPC);
        }
    }
    backspace_amt = 1;
    return true;
}
