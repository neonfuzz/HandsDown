// -----------------------
// Initiate combo aliases.
// -----------------------
enum combos {
    // Off-map alphas
    JP_Z,
    UK_Q,
    // H-digraphs
    DN_TH,
    CL_CH,
    SN_SH,
    HI_WH,
    GM_GH,
    PM_PH,
    // Automatically count the number of combos.
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

// ----------------------------------
// Define which keys initiate combos.
// ----------------------------------
// Off-map alphas
const uint16_t PROGMEM jp_z_combo[] = {KC_J, KC_P, COMBO_END};
const uint16_t PROGMEM uk_q_combo[] = {KC_U, KC_K, COMBO_END};

// H-digraphs
const uint16_t PROGMEM dn_th_combo[] = {LSFT_T(KC_D), LALT_T(KC_N), COMBO_END};
const uint16_t PROGMEM cl_ch_combo[] = {KC_C, KC_L, COMBO_END};
const uint16_t PROGMEM sn_sh_combo[] = {LGUI_T(KC_S), LALT_T(KC_N), COMBO_END};
const uint16_t PROGMEM hi_wh_combo[] = {RCTL_T(KC_H), RGUI_T(KC_I), COMBO_END};
const uint16_t PROGMEM gm_gh_combo[] = {KC_G, KC_M, COMBO_END};
const uint16_t PROGMEM pm_ph_combo[] = {KC_P, KC_M, COMBO_END};

// ----------------------------
// Map combos to their results.
// ----------------------------
combo_t key_combos[] = {
    // Off-map alphas
    [JP_Z] = COMBO(jp_z_combo, KC_Z),
    [UK_Q] = COMBO(uk_q_combo, KC_Q),
    // H-digraphs
    [DN_TH] = COMBO_ACTION(dn_th_combo),
    [CL_CH] = COMBO_ACTION(cl_ch_combo),
    [SN_SH] = COMBO_ACTION(sn_sh_combo),
    [HI_WH] = COMBO_ACTION(hi_wh_combo),
    [GM_GH] = COMBO_ACTION(gm_gh_combo),
    [PM_PH] = COMBO_ACTION(pm_ph_combo),
};

// --------------------------------------
// Define results for complicated combos.
// --------------------------------------
void process_combo_event(uint16_t combo_index, bool pressed) {
    if (pressed) {
        switch (combo_index) {
            // H-digraphs
            case DN_TH:
                tap_code16(KC_T);
                clear_mods();
                tap_code16(KC_H);
                break;
            case CL_CH:
                tap_code16(KC_C);
                clear_mods();
                tap_code16(KC_H);
                break;
            case SN_SH:
                tap_code16(KC_S);
                clear_mods();
                tap_code16(KC_H);
                break;
            case HI_WH:
                tap_code16(KC_W);
                clear_mods();
                tap_code16(KC_H);
                break;
            case GM_GH:
                tap_code16(KC_G);
                clear_mods();
                tap_code16(KC_H);
                break;
            case PM_PH:
                tap_code16(KC_P);
                clear_mods();
                tap_code16(KC_H);
                break;
        }
    }
}
