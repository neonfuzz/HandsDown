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
    AACC,       // á
    EACC,       // é
    IACC,       // í
    OACC,       // ó
    UACC,       // ú
    ESZETT,     // ß
    NTILDE,     // ñ
    AACC_CAP,   // Á
    EACC_CAP,   // É
    IACC_CAP,   // Í
    OACC_CAP,   // Ó
    UACC_CAP,   // Ú
    ESZETT_CAP, // ẞ
    NTILDE_CAP, // Ñ
    // special symbols
    TM,      // ™
    RTM,     // ®
    UPQUEST, // ¿
};

const uint32_t unicode_map[] PROGMEM = {
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
    [AACC      ] = 0x00e1,
    [EACC      ] = 0x00e9,
    [IACC      ] = 0x00ed,
    [OACC      ] = 0x00f3,
    [UACC      ] = 0x00fa,
    [ESZETT    ] = 0x00df,
    [NTILDE    ] = 0x00f1,
    [AACC_CAP  ] = 0x00c1,
    [EACC_CAP  ] = 0x00c9,
    [IACC_CAP  ] = 0x00cd,
    [OACC_CAP  ] = 0x00d3,
    [UACC_CAP  ] = 0x00da,
    [ESZETT_CAP] = 0x1e9e,
    [NTILDE_CAP] = 0x00d1,
    [TM        ] = 0x2122,
    [RTM       ] = 0x00ae,
    [UPQUEST   ] = 0x00bf,
};
