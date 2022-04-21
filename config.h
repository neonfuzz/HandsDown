/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

// Tapping term, in ms.
#undef TAPPING_TERM
#define TAPPING_TERM 180

// Mouse mode settings.
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 45

// Tap & Hold keys trigger the hold if another key
// is pressed before releasing, even if it hasn't
// hit the `TAPPING_TERM`.
#define PERMISSIVE_HOLD

// Milliseconds to pause after sending wakeup packet.
#define USB_SUSPEND_WAKEUP_DELAY 0

// Dimmer LEDs.
#undef LED_BRIGHTNESS_DEFAULT
#define LED_BRIGHTNESS_DEFAULT 15
