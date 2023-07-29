enum unicode_names {
    // special characters
    AACC,     // á
    EACC,     // é
    IACC,     // í
    OACC,     // ó
    UACC,     // ú
    ESZETT,   // ß
    NTILDE,   // ñ
    AACCUP,   // Á
    EACCUP,   // É
    IACCUP,   // Í
    OACCUP,   // Ó
    UACCUP,   // Ú
    ESZETTUP, // ẞ
    NTILDEUP, // Ñ
    // greek
    ALPHA, // α
    BETA,  // β
    GAMMA, // γ
    DELTA, // δ
    EPSIL, // ϵ
    ZETA,  // ζ
    ETA,   // η
    THETA, // θ
    IOTA,  // ι
    KAPPA, // κ
    LAMBD, // λ
    MU,    // μ
    NU,    // ν
    XI,    // ξ
    OMICR, // ο
    PI,    // π
    RHO,   // ρ
    SIGMA, // σ
    TAU,   // τ
    UPSIL, // υ
    PHI,   // ϕ
    CHI,   // χ
    PSI,   // ψ
    OMEGA, // ω
    ALPUP, // Α
    BETUP, // Β
    GAMUP, // Γ
    DELUP, // Δ
    EPSUP, // Ε
    ZETUP, // Ζ
    ETAUP, // Η
    THEUP, // Θ
    IOTUP, // Ι
    KAPUP, // Κ
    LAMUP, // Λ
    MUUP,  // Μ
    NUUP,  // Ν
    XIUP,  // Ξ
    OMIUP, // Ο
    PIUP,  // Π
    RHOUP, // Ρ
    SIGUP, // Σ
    TAUUP, // Τ
    UPSUP, // ϒ
    PHIUP, // Φ
    CHIUP, // Χ
    PSIUP, // Ψ
    OMEUP, // Ω
    // ukranian
    UK_A,      // а
    UK_B,      // б
    UK_V,      // в
    UK_H,      // г
    UK_G,      // ґ
    UK_D,      // д
    UK_E,      // е
    UK_YE,     // є
    UK_J,      // ж
    UK_Z,      // з
    UK_Y,      // и
    UK_I,      // і
    UK_YI,     // ї
    UK_YY,     // й
    UK_K,      // к
    UK_L,      // л
    UK_M,      // м
    UK_N,      // н
    UK_O,      // о
    UK_P,      // п
    UK_R,      // р
    UK_S,      // с
    UK_T,      // т
    UK_U,      // у
    UK_F,      // ф
    UK_X,      // х
    UK_TS,     // ц
    UK_CH,     // ч
    UK_SH,     // ш
    UK_SHCH,   // щ
    UK_SOFT,   // ь
    UK_YU,     // ю
    UK_YA,     // я
    UK_AUP,    // А
    UK_BUP,    // Б
    UK_VUP,    // В
    UK_HUP,    // Г
    UK_GUP,    // Ґ
    UK_DUP,    // Д
    UK_EUP,    // Е
    UK_YEUP,   // Є
    UK_JUP,    // Ж
    UK_ZUP,    // З
    UK_YUP,    // И
    UK_IUP,    // І
    UK_YIUP,   // Ї
    UK_YYUP,   // Й
    UK_KUP,    // К
    UK_LUP,    // Л
    UK_MUP,    // М
    UK_NUP,    // Н
    UK_OUP,    // О
    UK_PUP,    // П
    UK_RUP,    // Р
    UK_SUP,    // С
    UK_TUP,    // Т
    UK_UUP,    // У
    UK_FUP,    // Ф
    UK_XUP,    // Х
    UK_TSUP,   // Ц
    UK_CHUP,   // Ч
    UK_SHUP,   // Ш
    UK_SHCHUP, // Щ
    UK_SOFTUP, // Ь
    UK_YUUP,   // Ю
    UK_YAUP,   // Я
    // special symbols
    TM,      // ™
    RTM,     // ®
    UPQUEST, // ¿
    // emoji
    IMP,        // 😈
    HEART,      // 💜
    HEARTEYES,  // 😍
    HEARTHANDS, // 🫶
    GRIN,       // 😁
    BLUSH,      // 😊
    TONGUE,     // 😛
    XD,         // 😆
    SHADES,     // 😎
    SLANT,      // 🫤
    UPSIDED,    // 🙃
    MELT,       // 🫠
    LAUGHCRY,   // 😅
    SHRUG,      // 🤷
    FPALM,      // 🤦
    HARSE,      // 🐎
    GOAT,       // 🐐
    DOG,        // 🐕️
    TPANDA,     // 🦝
};

const uint32_t unicode_map[] PROGMEM = {
    // special characters
    [AACC    ] = 0x00e1,
    [EACC    ] = 0x00e9,
    [IACC    ] = 0x00ed,
    [OACC    ] = 0x00f3,
    [UACC    ] = 0x00fa,
    [ESZETT  ] = 0x00df,
    [NTILDE  ] = 0x00f1,
    [AACCUP  ] = 0x00c1,
    [EACCUP  ] = 0x00c9,
    [IACCUP  ] = 0x00cd,
    [OACCUP  ] = 0x00d3,
    [UACCUP  ] = 0x00da,
    [ESZETTUP] = 0x1e9e,
    [NTILDEUP] = 0x00d1,
    //greek
    [ALPHA] = 0x03b1,
    [BETA ] = 0x03b2,
    [GAMMA] = 0x03b3,
    [DELTA] = 0x03b4,
    [EPSIL] = 0x03b5,
    [ZETA ] = 0x03b6,
    [ETA  ] = 0x03b7,
    [THETA] = 0x03b8,
    [IOTA ] = 0x03b9,
    [KAPPA] = 0x03ba,
    [LAMBD] = 0x03bb,
    [MU   ] = 0x03bc,
    [NU   ] = 0x03bd,
    [XI   ] = 0x03be,
    [OMICR] = 0x03bf,
    [PI   ] = 0x03c0,
    [RHO  ] = 0x03c1,
    [SIGMA] = 0x03c3,
    [TAU  ] = 0x03c4,
    [UPSIL] = 0x03c5,
    [PHI  ] = 0x03c6,
    [CHI  ] = 0x03c7,
    [PSI  ] = 0x03c8,
    [OMEGA] = 0x03c9,
    [ALPUP] = 0x0391,
    [BETUP] = 0x0392,
    [GAMUP] = 0x0393,
    [DELUP] = 0x0394,
    [EPSUP] = 0x0395,
    [ZETUP] = 0x0396,
    [ETAUP] = 0x0397,
    [THEUP] = 0x0398,
    [IOTUP] = 0x0399,
    [KAPUP] = 0x039a,
    [LAMUP] = 0x039b,
    [MUUP ] = 0x039c,
    [NUUP ] = 0x039d,
    [XIUP ] = 0x039e,
    [OMIUP] = 0x039f,
    [PIUP ] = 0x03a0,
    [RHOUP] = 0x03a1,
    [SIGUP] = 0x03a3,
    [TAUUP] = 0x03a4,
    [UPSUP] = 0x03a5,
    [PHIUP] = 0x03a6,
    [CHIUP] = 0x03a7,
    [PSIUP] = 0x03a8,
    [OMEUP] = 0x03a9,
    // ukranian
    [UK_A     ] = 0x0430,
    [UK_B     ] = 0x0431,
    [UK_V     ] = 0x0432,
    [UK_H     ] = 0x0433,
    [UK_G     ] = 0x0491,
    [UK_D     ] = 0x0434,
    [UK_E     ] = 0x0435,
    [UK_YE    ] = 0x0454,
    [UK_J     ] = 0x0436,
    [UK_Z     ] = 0x0437,
    [UK_Y     ] = 0x0438,
    [UK_I     ] = 0x0456,
    [UK_YI    ] = 0x0457,
    [UK_YY    ] = 0x0439,
    [UK_K     ] = 0x043A,
    [UK_L     ] = 0x043B,
    [UK_M     ] = 0x043C,
    [UK_N     ] = 0x043D,
    [UK_O     ] = 0x043E,
    [UK_P     ] = 0x043F,
    [UK_R     ] = 0x0440,
    [UK_S     ] = 0x0441,
    [UK_T     ] = 0x0442,
    [UK_U     ] = 0x0443,
    [UK_F     ] = 0x0444,
    [UK_X     ] = 0x0445,
    [UK_TS    ] = 0x0446,
    [UK_CH    ] = 0x0447,
    [UK_SH    ] = 0x0448,
    [UK_SHCH  ] = 0x0449,
    [UK_SOFT  ] = 0x044C,
    [UK_YU    ] = 0x044E,
    [UK_YA    ] = 0x044F,
    [UK_AUP   ] = 0x0410,
    [UK_BUP   ] = 0x0411,
    [UK_VUP   ] = 0x0412,
    [UK_HUP   ] = 0x0413,
    [UK_GUP   ] = 0x0490,
    [UK_DUP   ] = 0x0414,
    [UK_EUP   ] = 0x0415,
    [UK_YEUP  ] = 0x0404,
    [UK_JUP   ] = 0x0416,
    [UK_ZUP   ] = 0x0417,
    [UK_YUP   ] = 0x0418,
    [UK_IUP   ] = 0x0406,
    [UK_YIUP  ] = 0x0407,
    [UK_YYUP  ] = 0x0419,
    [UK_KUP   ] = 0x041A,
    [UK_LUP   ] = 0x041B,
    [UK_MUP   ] = 0x041C,
    [UK_NUP   ] = 0x041D,
    [UK_OUP   ] = 0x041E,
    [UK_PUP   ] = 0x041F,
    [UK_RUP   ] = 0x0420,
    [UK_SUP   ] = 0x0421,
    [UK_TUP   ] = 0x0422,
    [UK_UUP   ] = 0x0423,
    [UK_FUP   ] = 0x0424,
    [UK_XUP   ] = 0x0425,
    [UK_TSUP  ] = 0x0426,
    [UK_CHUP  ] = 0x0427,
    [UK_SHUP  ] = 0x0428,
    [UK_SHCHUP] = 0x0429,
    [UK_SOFTUP] = 0x042C,
    [UK_YUUP  ] = 0x042E,
    [UK_YAUP  ] = 0x042F,
    // special symbols
    [TM     ] = 0x2122,
    [RTM    ] = 0x00ae,
    [UPQUEST] = 0x00bf,
    // emoji
    [IMP       ] = 0x1f608,
    [HEART     ] = 0x1f49c,
    [HEARTEYES ] = 0x1f60d,
    [HEARTHANDS] = 0x1faf6,
    [GRIN      ] = 0x1f601,
    [BLUSH     ] = 0x1f60a,
    [TONGUE    ] = 0x1f61b,
    [XD        ] = 0x1f606,
    [SHADES    ] = 0x1f60e,
    [SLANT     ] = 0x1fae4,
    [UPSIDED   ] = 0x1f643,
    [MELT      ] = 0x1fae0,
    [LAUGHCRY  ] = 0x1f605,
    [SHRUG     ] = 0x1f937,
    [FPALM     ] = 0x1f926,
    [HARSE     ] = 0x1f40e,
    [GOAT      ] = 0x1f410,
    [DOG       ] = 0x1f415,
    [TPANDA    ] = 0x1f99d,
};
