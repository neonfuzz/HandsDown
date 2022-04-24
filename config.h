/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

// Tapping term, in ms.
#undef TAPPING_TERM
#define TAPPING_TERM 180

// Tap & Hold keys trigger the hold if another key
// is pressed before releasing, even if it hasn't
// hit the `TAPPING_TERM`.
#define PERMISSIVE_HOLD

// Combo definitions.
#define COMBO_STRICT_TIMER
#define EXTRA_SHORT_COMBOS
#undef COMBO_TERM
#define COMBO_TERM (TAPPING_TERM/5)

// Adaptive definitions.
#define ADAPTIVE_TERM (TAPPING_TERM*1.1)

// Linger definitions.
#define LINGER_TERM (TAPPING_TERM*3/5)

// Layer tap toggle number of taps.
#undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2

// Mouse mode settings.
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 45

// Define unicode version(s).
#define UNICODE_SELECTED_MODES UC_LNX, UC_WINC
// Always start with unicode Linux.
#define UNICODE_CYCLE_PERSIST false

// Milliseconds to pause after sending wakeup packet.
#define USB_SUSPEND_WAKEUP_DELAY 0

// Dimmer LEDs.
#undef LED_BRIGHTNESS_DEFAULT
#define LED_BRIGHTNESS_DEFAULT 15
