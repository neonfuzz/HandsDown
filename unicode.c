enum unicode_names {
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
    OMICR, // �
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
    // special symbols
    TM,      // ™
    RTM,     // ®
    UPQUEST, // ¿
};

const uint32_t unicode_map[] PROGMEM = {
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
    // special symbols
    [TM     ] = 0x2122,
    [RTM    ] = 0x00ae,
    [UPQUEST] = 0x00bf,
};
