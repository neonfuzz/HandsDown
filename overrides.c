// --------------------------
// Define modifier + key = ??
// --------------------------
const key_override_t ampersand_override   = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_AMPR);
const key_override_t asterisk_override    = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_SLASH, KC_ASTR, ~0, MOD_MASK_GUI);
const key_override_t exclamation_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUES, KC_EXLM);
const key_override_t minus_override       = ko_make_basic(MOD_MASK_SHIFT, KC_UNDS, KC_MINS);
const key_override_t pipe_override        = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_PIPE);
const key_override_t semicolon_override   = ko_make_basic(MOD_MASK_SHIFT, KC_COLN, KC_SCLN);
const key_override_t delete_override      = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// ---------------------------------------------
// Globally define all key overrides to be used.
// ---------------------------------------------
const key_override_t **key_overrides = (const key_override_t *[]){
    &ampersand_override,
    &asterisk_override,
    &exclamation_override,
    &minus_override,
    &pipe_override,
    &semicolon_override,
    &delete_override,
    NULL // Null terminate the array of overrides!
};
