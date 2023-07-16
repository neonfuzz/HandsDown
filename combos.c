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
    // 3-grams
    AG_ANG,
    EG_ENG,
    EX_EXC,
    IG_ING,
    IK_ITY,
    NC_NCE,
    NH_NCH,
    IN_N_T,
    OG_ONG,
    UG_UNG,
    WY_WHY,
    // 4-grams
    AH_AUGH,
    AU_AUTO,
    AV_AVER,
    CR_CESS,
    EV_EVER,
    FX_FROM,
    HR_HERE,
    HV_HAVE,
    IT_IGHT,
    IV_IVER,
    LR_LESS,
    MT_MENT,
    NR_NESS,
    OD_OULD,
    OH_OUGH,
    OV_OVER,
    SI_SEMI,
    SD_SOME,
    SL_SELF,
    SP_SHIP,
    TE_TIME,
    TN_TION,
    WA_WARD,
    WI_WITH,
    WK_WORK,
    WO_WORD,
    WT_WHAT,
    WN_WHEN,
    WX_WERE,
    // 5-grams
    AM_ACCOM,
    IEG_INGLE,
    MJ_MULTI,
    OL_OLOGY,
    OR_OTHER,
    OT_OUGHT,
    RM_RECOM,
    SR_SUPER,
    TA_TRANS,
    TR_THERE,
    TG_THING,
    UR_UNDER,
    WC_WHICH,
    WR_WHERE,
    // 6-grams
    NA_NATION,
    PE_PEOPLE,
    // 7-grams
    UM_UNACCOM,
    // 8-grams
    WRV_WHEREVER,
    // Pronouns
    ID_ID,
    IE_IVE,
    IL_ILL,
    IM_IM,
    MS_MYSELF,
    TD_THEYD,
    TJ_THEYRE,
    TL_THEYLL,
    TV_THEYVE,
    TX_THEIR,
    TY_THEY,
    MD_THEM,
    TS_THEMSELVES,
    WD_WED,
    WJ_WERE,
    WL_WELL,
    WV_WEVE,
    OS_OURSELVES,
    YD_YOUD,
    YJ_YOURE,
    YL_YOULL,
    YV_YOUVE,
    YX_YOUR,
    YF_YOURSELF,
    YS_YOURSELVES,
    // Macros
    DA_CAPS,
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

// 3-grams
const uint16_t PROGMEM ang_combo[] = {RSFT_T(KC_A), KC_G, COMBO_END};
const uint16_t PROGMEM eng_combo[] = {RALT_T(KC_E), KC_G, COMBO_END};
const uint16_t PROGMEM exc_combo[] = {RALT_T(KC_E), KC_X, COMBO_END};
const uint16_t PROGMEM ing_combo[] = {RGUI_T(KC_I), KC_G, COMBO_END};
const uint16_t PROGMEM ity_combo[] = {RGUI_T(KC_I), KC_K, COMBO_END};
const uint16_t PROGMEM nce_combo[] = {LALT_T(KC_N), KC_C, COMBO_END};
const uint16_t PROGMEM nch_combo[] = {LALT_T(KC_N), RCTL_T(KC_H), COMBO_END};
const uint16_t PROGMEM n_t_combo[] = {RGUI_T(KC_I), LALT_T(KC_N), COMBO_END};
const uint16_t PROGMEM ong_combo[] = {KC_O, KC_G, COMBO_END};
const uint16_t PROGMEM ung_combo[] = {KC_U, KC_G, COMBO_END};
const uint16_t PROGMEM why_combo[] = {KC_W, KC_Y, COMBO_END};

// 4-grams
const uint16_t PROGMEM augh_combo[]  = {RSFT_T(KC_A), RCTL_T(KC_H), COMBO_END};
const uint16_t PROGMEM auto_combo[]  = {RSFT_T(KC_A), KC_COMM, COMBO_END};
const uint16_t PROGMEM aver_combo[]  = {RSFT_T(KC_A), KC_V, COMBO_END};
const uint16_t PROGMEM cess_combo[]  = {KC_C, LCTL_T(KC_R), COMBO_END};
const uint16_t PROGMEM ever_combo[]  = {RALT_T(KC_E), KC_V, COMBO_END};
const uint16_t PROGMEM from_combo[]  = {KC_F, KC_X, COMBO_END};
const uint16_t PROGMEM here_combo[]  = {RCTL_T(KC_H), LCTL_T(KC_R), COMBO_END};
const uint16_t PROGMEM have_combo[]  = {RCTL_T(KC_H), KC_V, COMBO_END};
const uint16_t PROGMEM ight_combo[]  = {RGUI_T(KC_I), LT(2, KC_T), COMBO_END};
const uint16_t PROGMEM iver_combo[]  = {RGUI_T(KC_I), KC_V, COMBO_END};
const uint16_t PROGMEM less_combo[]  = {KC_L, LCTL_T(KC_R), COMBO_END};
const uint16_t PROGMEM ment_combo[]  = {KC_M, LT(2, KC_T), COMBO_END};
const uint16_t PROGMEM ness_combo[]  = {LALT_T(KC_N), LCTL_T(KC_R), COMBO_END};
const uint16_t PROGMEM ould_combo[]  = {KC_O, LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM ough_combo[]  = {KC_O, RCTL_T(KC_H), COMBO_END};
const uint16_t PROGMEM over_combo[]  = {KC_O, KC_V, COMBO_END};
const uint16_t PROGMEM semi_combo[]  = {LGUI_T(KC_S), RGUI_T(KC_I), COMBO_END};
const uint16_t PROGMEM some_combo[]  = {LGUI_T(KC_S), LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM self_combo[]  = {LGUI_T(KC_S), KC_L, COMBO_END};
const uint16_t PROGMEM ship_combo[]  = {LGUI_T(KC_S), KC_P, COMBO_END};
const uint16_t PROGMEM time_combo[]  = {LT(2, KC_T), RALT_T(KC_E), COMBO_END};
const uint16_t PROGMEM tion_combo[]  = {LT(2, KC_T), LALT_T(KC_N), COMBO_END};
const uint16_t PROGMEM ward_combo[]  = {KC_W, RSFT_T(KC_A), COMBO_END};
const uint16_t PROGMEM with_combo[]  = {KC_W, RGUI_T(KC_I), COMBO_END};
const uint16_t PROGMEM work_combo[]  = {KC_W, KC_K, COMBO_END};
const uint16_t PROGMEM word_combo[]  = {KC_W, KC_O, COMBO_END};
const uint16_t PROGMEM what_combo[]  = {KC_W, LT(2, KC_T), COMBO_END};
const uint16_t PROGMEM when_combo[]  = {KC_W, LALT_T(KC_N), COMBO_END};
const uint16_t PROGMEM werex_combo[] = {KC_W, KC_X, COMBO_END};

// 5-grams
const uint16_t PROGMEM accom_combo[] = {RSFT_T(KC_A), KC_M, COMBO_END};
const uint16_t PROGMEM ingle_combo[] = {RGUI_T(KC_I), RALT_T(KC_E), KC_G, COMBO_END};
const uint16_t PROGMEM multi_combo[] = {KC_M, KC_J, COMBO_END};
const uint16_t PROGMEM ology_combo[] = {KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM other_combo[] = {KC_O, LCTL_T(KC_R), COMBO_END};
const uint16_t PROGMEM ought_combo[] = {KC_O, LT(2, KC_T), COMBO_END};
const uint16_t PROGMEM recom_combo[] = {LCTL_T(KC_R), KC_M, COMBO_END};
const uint16_t PROGMEM super_combo[] = {LGUI_T(KC_S), LCTL_T(KC_R), COMBO_END};
const uint16_t PROGMEM trans_combo[] = {LT(2, KC_T), RSFT_T(KC_A), COMBO_END};
const uint16_t PROGMEM there_combo[] = {LT(2, KC_T), LCTL_T(KC_R), COMBO_END};
const uint16_t PROGMEM thing_combo[] = {LT(2, KC_T), KC_G, COMBO_END};
const uint16_t PROGMEM under_combo[] = {KC_U, LCTL_T(KC_R), COMBO_END};
const uint16_t PROGMEM which_combo[] = {KC_W, KC_C, COMBO_END};
const uint16_t PROGMEM where_combo[] = {KC_W, LCTL_T(KC_R), COMBO_END};

// 6-grams
const uint16_t PROGMEM nation_combo[] = {LALT_T(KC_N), RSFT_T(KC_A), COMBO_END};
const uint16_t PROGMEM people_combo[] = {KC_P, RALT_T(KC_E), COMBO_END};

// 7-grams
const uint16_t PROGMEM unaccom_combo[] = {KC_U, KC_M, COMBO_END};

// 8-grams
const uint16_t PROGMEM wherever_combo[] = {KC_W, LCTL_T(KC_R), KC_V, COMBO_END};

// Pronouns
const uint16_t PROGMEM id_combo[]         = {RGUI_T(KC_I), LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM ive_combo[]        = {RGUI_T(KC_I), RALT_T(KC_E), COMBO_END};
const uint16_t PROGMEM ill_combo[]        = {RGUI_T(KC_I), KC_L, COMBO_END};
const uint16_t PROGMEM im_combo[]         = {RGUI_T(KC_I), KC_M, COMBO_END};
const uint16_t PROGMEM myself_combo[]     = {KC_M, LGUI_T(KC_S), COMBO_END};
const uint16_t PROGMEM theyd_combo[]      = {LT(2, KC_T), LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM theyre_combo[]     = {LT(2, KC_T), KC_J, COMBO_END};
const uint16_t PROGMEM theyll_combo[]     = {LT(2, KC_T), KC_L, COMBO_END};
const uint16_t PROGMEM theyve_combo[]     = {LT(2, KC_T), KC_V, COMBO_END};
const uint16_t PROGMEM their_combo[]      = {LT(2, KC_T), KC_X, COMBO_END};
const uint16_t PROGMEM they_combo[]       = {LT(2, KC_T), KC_Y, COMBO_END};
const uint16_t PROGMEM them_combo[]       = {KC_M, LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM themselves_combo[] = {LT(2, KC_T), LGUI_T(KC_S), COMBO_END};
const uint16_t PROGMEM wed_combo[]        = {KC_W, LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM were_combo[]       = {KC_W, KC_J, COMBO_END};
const uint16_t PROGMEM well_combo[]       = {KC_W, KC_L, COMBO_END};
const uint16_t PROGMEM weve_combo[]       = {KC_W, KC_V, COMBO_END};
const uint16_t PROGMEM ourselves_combo[]  = {KC_O, LGUI_T(KC_S), COMBO_END};
const uint16_t PROGMEM youd_combo[]       = {KC_Y, LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM youre_combo[]      = {KC_Y, KC_J, COMBO_END};
const uint16_t PROGMEM youll_combo[]      = {KC_Y, KC_L, COMBO_END};
const uint16_t PROGMEM youve_combo[]      = {KC_Y, KC_V, COMBO_END};
const uint16_t PROGMEM your_combo[]       = {KC_Y, KC_X, COMBO_END};
const uint16_t PROGMEM yourself_combo[]   = {KC_Y, KC_F, COMBO_END};
const uint16_t PROGMEM yourselves_combo[] = {KC_Y, LGUI_T(KC_S), COMBO_END};

// Macros
const uint16_t PROGMEM caps_combo[] = {LSFT_T(KC_D), RSFT_T(KC_A), COMBO_END};

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
    // 3-grams
    [AG_ANG] = COMBO_ACTION(ang_combo),
    [EG_ENG] = COMBO_ACTION(eng_combo),
    [EX_EXC] = COMBO_ACTION(exc_combo),
    [IG_ING] = COMBO_ACTION(ing_combo),
    [IK_ITY] = COMBO_ACTION(ity_combo),
    [NC_NCE] = COMBO_ACTION(nce_combo),
    [NH_NCH] = COMBO_ACTION(nch_combo),
    [IN_N_T] = COMBO_ACTION(n_t_combo),
    [OG_ONG] = COMBO_ACTION(ong_combo),
    [UG_UNG] = COMBO_ACTION(ung_combo),
    [WY_WHY] = COMBO_ACTION(why_combo),
    // 4-grams
    [AH_AUGH] = COMBO_ACTION(augh_combo),
    [AU_AUTO] = COMBO_ACTION(auto_combo),
    [AV_AVER] = COMBO_ACTION(aver_combo),
    [CR_CESS] = COMBO_ACTION(cess_combo),
    [EV_EVER] = COMBO_ACTION(ever_combo),
    [FX_FROM] = COMBO_ACTION(from_combo),
    [HR_HERE] = COMBO_ACTION(here_combo),
    [HV_HAVE] = COMBO_ACTION(have_combo),
    [IT_IGHT] = COMBO_ACTION(ight_combo),
    [IV_IVER] = COMBO_ACTION(iver_combo),
    [LR_LESS] = COMBO_ACTION(less_combo),
    [MT_MENT] = COMBO_ACTION(ment_combo),
    [NR_NESS] = COMBO_ACTION(ness_combo),
    [OD_OULD] = COMBO_ACTION(ould_combo),
    [OH_OUGH] = COMBO_ACTION(ough_combo),
    [OV_OVER] = COMBO_ACTION(over_combo),
    [SI_SEMI] = COMBO_ACTION(semi_combo),
    [SD_SOME] = COMBO_ACTION(some_combo),
    [SL_SELF] = COMBO_ACTION(self_combo),
    [SP_SHIP] = COMBO_ACTION(ship_combo),
    [TE_TIME] = COMBO_ACTION(time_combo),
    [TN_TION] = COMBO_ACTION(tion_combo),
    [WA_WARD] = COMBO_ACTION(ward_combo),
    [WI_WITH] = COMBO_ACTION(with_combo),
    [WK_WORK] = COMBO_ACTION(work_combo),
    [WO_WORD] = COMBO_ACTION(word_combo),
    [WT_WHAT] = COMBO_ACTION(what_combo),
    [WN_WHEN] = COMBO_ACTION(when_combo),
    [WX_WERE] = COMBO_ACTION(werex_combo),
    // 5-grams
    [AM_ACCOM]  = COMBO_ACTION(accom_combo),
    [IEG_INGLE] = COMBO_ACTION(ingle_combo),
    [MJ_MULTI]  = COMBO_ACTION(multi_combo),
    [OL_OLOGY]  = COMBO_ACTION(ology_combo),
    [OR_OTHER]  = COMBO_ACTION(other_combo),
    [OT_OUGHT]  = COMBO_ACTION(ought_combo),
    [RM_RECOM]  = COMBO_ACTION(recom_combo),
    [SR_SUPER]  = COMBO_ACTION(super_combo),
    [TA_TRANS]  = COMBO_ACTION(trans_combo),
    [TR_THERE]  = COMBO_ACTION(there_combo),
    [TG_THING]  = COMBO_ACTION(thing_combo),
    [UR_UNDER]  = COMBO_ACTION(under_combo),
    [WC_WHICH]  = COMBO_ACTION(which_combo),
    [WR_WHERE]  = COMBO_ACTION(where_combo),
    // 6-grams
    [NA_NATION] = COMBO_ACTION(nation_combo),
    [PE_PEOPLE] = COMBO_ACTION(people_combo),
    // 7-grams
    [UM_UNACCOM] = COMBO_ACTION(unaccom_combo),
    // 8-grams
    [WRV_WHEREVER] = COMBO_ACTION(wherever_combo),
    // Pronouns
    [ID_ID]         = COMBO_ACTION(id_combo),
    [IE_IVE]        = COMBO_ACTION(ive_combo),
    [IL_ILL]        = COMBO_ACTION(ill_combo),
    [IM_IM]         = COMBO_ACTION(im_combo),
    [MS_MYSELF]     = COMBO_ACTION(myself_combo),
    [TD_THEYD]      = COMBO_ACTION(theyd_combo),
    [TJ_THEYRE]     = COMBO_ACTION(theyre_combo),
    [TL_THEYLL]     = COMBO_ACTION(theyll_combo),
    [TV_THEYVE]     = COMBO_ACTION(theyve_combo),
    [TX_THEIR]      = COMBO_ACTION(their_combo),
    [TY_THEY]       = COMBO_ACTION(they_combo),
    [MD_THEM]       = COMBO_ACTION(them_combo),
    [TS_THEMSELVES] = COMBO_ACTION(themselves_combo),
    [WD_WED]        = COMBO_ACTION(wed_combo),
    [WJ_WERE]       = COMBO_ACTION(were_combo),
    [WL_WELL]       = COMBO_ACTION(well_combo),
    [WV_WEVE]       = COMBO_ACTION(weve_combo),
    [OS_OURSELVES]  = COMBO_ACTION(ourselves_combo),
    [YD_YOUD]       = COMBO_ACTION(youd_combo),
    [YJ_YOURE]      = COMBO_ACTION(youre_combo),
    [YL_YOULL]      = COMBO_ACTION(youll_combo),
    [YV_YOUVE]      = COMBO_ACTION(youve_combo),
    [YX_YOUR]       = COMBO_ACTION(your_combo),
    [YF_YOURSELF]   = COMBO_ACTION(yourself_combo),
    [YS_YOURSELVES] = COMBO_ACTION(yourselves_combo),
    // Macros
    [DA_CAPS] = COMBO(caps_combo, CAPWRD),
};

// --------------------------------------
// Define results for complicated combos.
// --------------------------------------

// Capital "I", whether in capslock or not.
void cap_i(void) {
    if (caps_lock) {
        tap_code16(KC_I);
    } else {
        register_code(KC_LSFT);
        tap_code16(KC_I);
        clear_mods();
    }
}

void process_combo_event(uint16_t combo_index, bool pressed) {
    if (pressed) {
        switch (prior_keycode) {
            case KC_D:
            case KC_P:
            case KC_COMM:
                set_mods(prior_saved_mods);
                tap_code16(prior_keycode);
                clear_mods();
                prior_saved_mods = 0;
                prior_keycode    = KC_NO;
                prior_keydown    = 0;
                break;
        }
        switch (combo_index) {
            // H-digraphs
            case DN_TH:
                tap_code16(KC_T);
                clear_mods();
                tap_code16(KC_H);
                backspace_amt = 2;
                break;
            case CL_CH:
                tap_code16(KC_C);
                clear_mods();
                tap_code16(KC_H);
                backspace_amt = 2;
                break;
            case SN_SH:
                tap_code16(KC_S);
                clear_mods();
                tap_code16(KC_H);
                backspace_amt = 2;
                break;
            case HI_WH:
                tap_code16(KC_W);
                clear_mods();
                tap_code16(KC_H);
                backspace_amt = 2;
                break;
            case GM_GH:
                tap_code16(KC_G);
                clear_mods();
                tap_code16(KC_H);
                backspace_amt = 2;
                break;
            case PM_PH:
                tap_code16(KC_P);
                clear_mods();
                tap_code16(KC_H);
                backspace_amt = 2;
                break;
            // 3-grams
            case AG_ANG:
                tap_code16(KC_A);
                clear_mods();
                SEND_STRING("ng");
                backspace_amt = 3;
                break;
            case EG_ENG:
                tap_code16(KC_E);
                clear_mods();
                SEND_STRING("ng");
                backspace_amt = 3;
                break;
            case EX_EXC:
                tap_code16(KC_E);
                clear_mods();
                SEND_STRING("xc");
                backspace_amt = 3;
                break;
            case IG_ING:
                tap_code16(KC_I);
                clear_mods();
                SEND_STRING("ng");
                backspace_amt = 3;
                break;
            case IK_ITY:
                tap_code16(KC_I);
                clear_mods();
                SEND_STRING("ty");
                backspace_amt = 3;
                break;
            case NC_NCE:
                tap_code16(KC_N);
                clear_mods();
                SEND_STRING("ce");
                backspace_amt = 3;
                break;
            case NH_NCH:
                tap_code16(KC_N);
                clear_mods();
                SEND_STRING("ch");
                backspace_amt = 3;
                break;
            case IN_N_T:
                tap_code16(KC_N);
                clear_mods();
                SEND_STRING("'t");
                backspace_amt = 3;
                break;
            case OG_ONG:
                tap_code16(KC_O);
                clear_mods();
                SEND_STRING("ng");
                backspace_amt = 3;
                break;
            case UG_UNG:
                tap_code16(KC_U);
                clear_mods();
                SEND_STRING("ng");
                backspace_amt = 3;
                break;
            case WY_WHY:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("hy");
                backspace_amt = 3;
                break;
            // 4-grams
            case AH_AUGH:
                tap_code16(KC_A);
                clear_mods();
                SEND_STRING("ugh");
                backspace_amt = 4;
                break;
            case AU_AUTO:
                tap_code16(KC_A);
                clear_mods();
                SEND_STRING("uto");
                backspace_amt = 4;
                break;
            case AV_AVER:
                tap_code16(KC_A);
                clear_mods();
                SEND_STRING("ver");
                backspace_amt = 4;
                break;
            case CR_CESS:
                tap_code16(KC_C);
                clear_mods();
                SEND_STRING("ess");
                backspace_amt = 4;
                break;
            case EV_EVER:
                tap_code16(KC_E);
                clear_mods();
                SEND_STRING("ver");
                backspace_amt = 4;
                break;
            case FX_FROM:
                tap_code16(KC_F);
                clear_mods();
                SEND_STRING("rom");
                backspace_amt = 4;
                break;
            case HR_HERE:
                tap_code16(KC_H);
                clear_mods();
                SEND_STRING("ere");
                backspace_amt = 4;
                break;
            case HV_HAVE:
                tap_code16(KC_H);
                clear_mods();
                SEND_STRING("ave");
                backspace_amt = 4;
                break;
            case IT_IGHT:
                tap_code16(KC_I);
                clear_mods();
                SEND_STRING("ght");
                backspace_amt = 4;
                break;
            case IV_IVER:
                tap_code16(KC_I);
                clear_mods();
                SEND_STRING("ver");
                backspace_amt = 4;
                break;
            case LR_LESS:
                tap_code16(KC_L);
                clear_mods();
                SEND_STRING("ess");
                backspace_amt = 4;
                break;
            case MT_MENT:
                tap_code16(KC_M);
                clear_mods();
                SEND_STRING("ent");
                backspace_amt = 4;
                break;
            case NR_NESS:
                tap_code16(KC_N);
                clear_mods();
                SEND_STRING("ess");
                backspace_amt = 4;
                break;
            case OH_OUGH:
                tap_code16(KC_O);
                clear_mods();
                SEND_STRING("ugh");
                backspace_amt = 4;
                break;
            case OD_OULD:
                tap_code16(KC_O);
                clear_mods();
                SEND_STRING("uld");
                backspace_amt = 4;
                break;
            case OV_OVER:
                tap_code16(KC_O);
                clear_mods();
                SEND_STRING("ver");
                backspace_amt = 4;
                break;
            case SI_SEMI:
                tap_code16(KC_S);
                clear_mods();
                SEND_STRING("emi");
                backspace_amt = 4;
                break;
            case SD_SOME:
                tap_code16(KC_S);
                clear_mods();
                SEND_STRING("ome");
                backspace_amt = 4;
                break;
            case SL_SELF:
                tap_code16(KC_S);
                clear_mods();
                SEND_STRING("elf");
                backspace_amt = 4;
                break;
            case SP_SHIP:
                tap_code16(KC_S);
                clear_mods();
                SEND_STRING("hip");
                backspace_amt = 4;
                break;
            case TE_TIME:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("ime");
                backspace_amt = 4;
                break;
            case TN_TION:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("ion");
                backspace_amt = 4;
                break;
            case WA_WARD:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("ard");
                backspace_amt = 4;
                break;
            case WI_WITH:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("ith");
                backspace_amt = 4;
                break;
            case WK_WORK:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("ork");
                backspace_amt = 4;
                break;
            case WO_WORD:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("ord");
                backspace_amt = 4;
                break;
            case WT_WHAT:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("hat");
                backspace_amt = 4;
                break;
            case WN_WHEN:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("hen");
                backspace_amt = 4;
                break;
            case WX_WERE:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("ere");
                backspace_amt = 4;
                break;
            // 5-grams
            case AM_ACCOM:
                tap_code16(KC_A);
                clear_mods();
                SEND_STRING("ccom");
                backspace_amt = 5;
                break;
            case IEG_INGLE:
                tap_code16(KC_I);
                clear_mods();
                SEND_STRING("ngle");
                backspace_amt = 5;
                break;
            case MJ_MULTI:
                tap_code16(KC_M);
                clear_mods();
                SEND_STRING("ulti");
                backspace_amt = 5;
                break;
            case OL_OLOGY:
                tap_code16(KC_O);
                clear_mods();
                SEND_STRING("logy");
                backspace_amt = 5;
                break;
            case OR_OTHER:
                tap_code16(KC_O);
                clear_mods();
                SEND_STRING("ther");
                backspace_amt = 5;
                break;
            case OT_OUGHT:
                tap_code16(KC_O);
                clear_mods();
                SEND_STRING("ught");
                backspace_amt = 5;
                break;
            case RM_RECOM:
                tap_code16(KC_R);
                clear_mods();
                SEND_STRING("ecom");
                backspace_amt = 5;
                break;
            case SR_SUPER:
                tap_code16(KC_S);
                clear_mods();
                SEND_STRING("uper");
                backspace_amt = 5;
                break;
            case TA_TRANS:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("rans");
                backspace_amt = 5;
                break;
            case TR_THERE:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("here");
                backspace_amt = 5;
                break;
            case TG_THING:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("hing");
                backspace_amt = 5;
                break;
            case UR_UNDER:
                tap_code16(KC_U);
                clear_mods();
                SEND_STRING("nder");
                backspace_amt = 5;
                break;
            case WC_WHICH:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("hich");
                backspace_amt = 5;
                break;
            case WR_WHERE:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("here");
                backspace_amt = 5;
                break;
            // 6-grams
            case NA_NATION:
                tap_code16(KC_N);
                clear_mods();
                SEND_STRING("ation");
                backspace_amt = 6;
                break;
            case PE_PEOPLE:
                tap_code16(KC_P);
                clear_mods();
                SEND_STRING("eople");
                backspace_amt = 6;
                break;
            // 7-grams
            case UM_UNACCOM:
                tap_code16(KC_U);
                clear_mods();
                SEND_STRING("naccom");
                backspace_amt = 7;
                break;
            // 8-grams
            case WRV_WHEREVER:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("herever");
                backspace_amt = 8;
                break;
            // Pronouns
            case ID_ID:
                cap_i();
                SEND_STRING("'d");
                backspace_amt = 3;
                break;
            case IE_IVE:
                cap_i();
                SEND_STRING("'ve");
                backspace_amt = 4;
                break;
            case IL_ILL:
                cap_i();
                SEND_STRING("'ll");
                break;
            case IM_IM:
                cap_i();
                SEND_STRING("'m");
                backspace_amt = 4;
                break;
            case MS_MYSELF:
                tap_code16(KC_M);
                SEND_STRING("yself");
                backspace_amt = 6;
                break;
            case TD_THEYD:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("hey'd");
                backspace_amt = 6;
                break;
            case TJ_THEYRE:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("hey're");
                backspace_amt = 7;
                break;
            case TL_THEYLL:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("hey'll");
                backspace_amt = 7;
                break;
            case TV_THEYVE:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("hey've");
                backspace_amt = 7;
                break;
            case TX_THEIR:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("heir");
                backspace_amt = 5;
                break;
            case TY_THEY:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("hey");
                backspace_amt = 4;
                break;
            case MD_THEM:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("hem");
                backspace_amt = 4;
                break;
            case TS_THEMSELVES:
                tap_code16(KC_T);
                clear_mods();
                SEND_STRING("hemselves");
                backspace_amt = 10;
                break;
            case WD_WED:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("e'd");
                backspace_amt = 4;
                break;
            case WJ_WERE:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("e're");
                backspace_amt = 5;
                break;
            case WL_WELL:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("e'll");
                backspace_amt = 5;
                break;
            case WV_WEVE:
                tap_code16(KC_W);
                clear_mods();
                SEND_STRING("e've");
                backspace_amt = 5;
                break;
            case OS_OURSELVES:
                tap_code16(KC_O);
                clear_mods();
                SEND_STRING("urselves");
                backspace_amt = 9;
                break;
            case YD_YOUD:
                tap_code16(KC_Y);
                clear_mods();
                SEND_STRING("ou'd");
                backspace_amt = 5;
                break;
            case YJ_YOURE:
                tap_code16(KC_Y);
                clear_mods();
                SEND_STRING("ou're");
                backspace_amt = 6;
                break;
            case YL_YOULL:
                tap_code16(KC_Y);
                clear_mods();
                SEND_STRING("ou'll");
                backspace_amt = 6;
                break;
            case YV_YOUVE:
                tap_code16(KC_Y);
                clear_mods();
                SEND_STRING("ou've");
                backspace_amt = 6;
                break;
            case YX_YOUR:
                tap_code16(KC_Y);
                clear_mods();
                SEND_STRING("our");
                backspace_amt = 4;
                break;
            case YF_YOURSELF:
                tap_code16(KC_Y);
                clear_mods();
                SEND_STRING("ourself");
                backspace_amt = 8;
                break;
            case YS_YOURSELVES:
                tap_code16(KC_Y);
                clear_mods();
                SEND_STRING("ourselves");
                backspace_amt = 10;
                break;
        }
    }
}
