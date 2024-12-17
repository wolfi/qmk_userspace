#pragma once

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Tap-hold configuration for home row mods.
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
// #define QUICK_TAP_TERM_PER_KEY
// TODO: Add retro tapping for windows key?

#define ACHORDION_STREAK

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

// Thumb Combos
#if defined (MIRYOKU_KLUDGE_THUMBCOMBOS)
  #define COMBO_COUNT 8
  #define COMBO_TERM 200
  #define EXTRA_SHORT_COMBOS
#endif
