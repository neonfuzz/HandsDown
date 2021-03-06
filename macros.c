enum custom_keycodes {
    ALLCAPS = EZ_SAFE_RANGE,
    CAPSWRD,
    LAMPOON,
    VIMALL,
    VIMCOPY,
    VIMPASTE,
    VIMSAVE,
    VIMSAVEQUIT,
    VIMQUIT,
    // emoji
    IMP,        // ๐
    HEART,      // ๐
    HEARTEYES,  // ๐
    HEARTHANDS, // ๐ซถ
    GRIN,       // ๐
    BLUSH,      // ๐
    TONGUE,     // ๐
    XTONGUE,    // ๐
    SHADES,     // ๐
    SLANT,      // ๐ซค
    UPSIDED,    // ๐
    MELT,       // ๐ซ 
    LAUGHCRY,   // ๐
    SHRUG,      // ๐คท
    HARSE,      // ๐
    GOAT,       // ๐
    BCAT,       // ๐โโฌ
    DOG,        // ๐๏ธ
    TPANDA,     // ๐ฆ
    UCMOD,      // UC_MOD with LED support
    // special characters
    AACCENT, // รก
    EACCENT, // รฉ
    IACCENT, // รญ
    OACCENT, // รณ
    UACCENT, // รบ
    ESZETT,  // ร
    NTILDE,  // รฑ
    // special symbols
    TM,      // โข
    RTM,     // ยฎ
    UPQUEST, // ยฟ
    LABK,    // <
};

bool process_macro_user(uint16_t keycode, const keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case ALLCAPS:
                allcaps_toggle();
                return false;
            case CAPSWRD:
                capsword_toggle();
                return false;
            case LAMPOON:
                lampoon_toggle();
                return false;
            case VIMALL:
                send_string("ggVG");
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
            // Emoji
            case IMP:
                send_unicode_string("๐");
                return false;
            case HEART:
                send_unicode_string("๐");
                return false;
            case HEARTEYES:
                send_unicode_string("๐");
                return false;
            case HEARTHANDS:
                send_unicode_string("๐ซถ");
                return false;
            case GRIN:
                send_unicode_string("๐");
                return false;
            case BLUSH:
                send_unicode_string("๐");
                return false;
            case TONGUE:
                send_unicode_string("๐");
                return false;
            case XTONGUE:
                send_unicode_string("๐");
                return false;
            case SHADES:
                send_unicode_string("๐");
                return false;
            case SLANT:
                send_unicode_string("๐ซค");
                return false;
            case UPSIDED:
                send_unicode_string("๐");
                return false;
            case MELT:
                send_unicode_string("๐ซ ");
                return false;
            case LAUGHCRY:
                send_unicode_string("๐");
                return false;
            case SHRUG:
                send_unicode_string("๐คท");
                return false;
            case HARSE:
                send_unicode_string("๐");
                return false;
            case GOAT:
                send_unicode_string("๐");
                return false;
            case BCAT:
                send_unicode_string("๐โโฌ");
                return false;
            case DOG:
                send_unicode_string("๐๏ธ");
                return false;
            case TPANDA:
                send_unicode_string("๐ฆ");
                return false;
            case UCMOD:
                cycle_unicode_input_mode(1);
                if (unicode_config.input_mode == UC_LNX) {
                    ergodox_right_led_3_off();
                } else {
                    ergodox_right_led_3_on();
                }
                return false;
            // special characters
            case AACCENT:
                send_unicode_string("รก");
                return false;
            case EACCENT:
                send_unicode_string("รฉ");
                return false;
            case IACCENT:
                send_unicode_string("รญ");
                return false;
            case OACCENT:
                send_unicode_string("รณ");
                return false;
            case UACCENT:
                send_unicode_string("รบ");
                return false;
            case ESZETT:
                send_unicode_string("ร");
                return false;
            case NTILDE:
                send_unicode_string("รฑ");
                return false;
            // special symbols
            case TM:
                send_unicode_string("โข");
                return false;
            case RTM:
                send_unicode_string("ยฎ");
                return false;
            case UPQUEST:
                send_unicode_string("ยฟ");
                return false;
            case LABK:
                tap_code16(KC_LABK);
                return false;
        }
    }
    return true;
}
