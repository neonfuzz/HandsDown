enum custom_keycodes {
    ALLCAPS = EZ_SAFE_RANGE,
    CAPWRD,
    LAMPOON,
    VIMALL,
    VIMCOPY,
    VIMPASTE,
    VIMSAVE,
    VIMSAVEQUIT,
    VIMQUIT,
    // emoji
    IMP,        // 😈
    HEART,      // 💜
    HEARTEYES,  // 😍
    HEARTHANDS, // 🫶
    GRIN,       // 😁
    BLUSH,      // 😊
    TONGUE,     // 😛
    XTONGUE,    // 😝
    SHADES,     // 😎
    SLANT,      // 🫤
    UPSIDED,    // 🙃
    MELT,       // 🫠
    LAUGHCRY,   // 😅
    SHRUG,      // 🤷
    HARSE,      // 🐎
    GOAT,       // 🐐
    BCAT,       // 🐈‍⬛
    DOG,        // 🐕️
    TPANDA,     // 🦝
    UCMOD,      // UC_MOD with LED support
    // special characters
    AACCENT, // á
    EACCENT, // é
    IACCENT, // í
    OACCENT, // ó
    UACCENT, // ú
    ESZETT,  // ß
    NTILDE,  // ñ
    // special symbols
    TM,      // ™
    RTM,     // ®
    UPQUEST, // ¿
    LABK,    // <
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
                send_unicode_string("😈");
                return false;
            case HEART:
                send_unicode_string("💜");
                return false;
            case HEARTEYES:
                send_unicode_string("😍");
                return false;
            case HEARTHANDS:
                send_unicode_string("🫶");
                return false;
            case GRIN:
                send_unicode_string("😁");
                return false;
            case BLUSH:
                send_unicode_string("😊");
                return false;
            case TONGUE:
                send_unicode_string("😛");
                return false;
            case XTONGUE:
                send_unicode_string("😝");
                return false;
            case SHADES:
                send_unicode_string("😎");
                return false;
            case SLANT:
                send_unicode_string("🫤");
                return false;
            case UPSIDED:
                send_unicode_string("🙃");
                return false;
            case MELT:
                send_unicode_string("🫠");
                return false;
            case LAUGHCRY:
                send_unicode_string("😅");
                return false;
            case SHRUG:
                send_unicode_string("🤷");
                return false;
            case HARSE:
                send_unicode_string("🐎");
                return false;
            case GOAT:
                send_unicode_string("🐐");
                return false;
            case BCAT:
                send_unicode_string("🐈‍⬛");
                return false;
            case DOG:
                send_unicode_string("🐕️");
                return false;
            case TPANDA:
                send_unicode_string("🦝");
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
                send_unicode_string("á");
                return false;
            case EACCENT:
                send_unicode_string("é");
                return false;
            case IACCENT:
                send_unicode_string("í");
                return false;
            case OACCENT:
                send_unicode_string("ó");
                return false;
            case UACCENT:
                send_unicode_string("ú");
                return false;
            case ESZETT:
                send_unicode_string("ß");
                return false;
            case NTILDE:
                send_unicode_string("ñ");
                return false;
            // special symbols
            case TM:
                send_unicode_string("™");
                return false;
            case RTM:
                send_unicode_string("®");
                return false;
            case UPQUEST:
                send_unicode_string("¿");
                return false;
            case LABK:
                tap_code16(KC_LABK);
                return false;
        }
    }
    return true;
}
