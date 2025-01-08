#include QMK_KEYBOARD_H

#include "keymap.h"
#include "features/achordion.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#define MOD_TAP_LAYOUT

#ifdef MOD_TAP_LAYOUT
  [BASE] = LAYOUT_split_3x5_3(
    KC_B,              KC_L,              KC_D,              KC_W,              KC_V,                 KC_J,                 KC_F,              KC_O,              KC_U,              KC_COMM,
    LGUI_T(KC_N),      LALT_T(KC_R),      LCTL_T(KC_T),      LSFT_T(KC_S),      KC_G,                 KC_Y,                 RSFT_T(KC_H),      RCTL_T(KC_A),      LALT_T(KC_E),      LGUI_T(KC_I),
    KC_X,              KC_Q,              KC_M,              KC_C,              KC_Z,                 KC_K,                 KC_P,              KC_QUOT,           KC_SCLN,           KC_DOT,
                                          LT(UML, KC_ESC),   LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB),    LT(SYM, KC_ENT),      LT(NUM, KC_BSPC),  KC_DEL
  ),
#else
  [BASE] = LAYOUT_split_3x5_3(
    KC_B,              KC_L,              KC_D,              KC_W,              KC_V,                 KC_J,                 KC_F,              KC_O,              KC_U,              KC_COMM,
    KC_N,              KC_R,              KC_T,              KC_S,              KC_G,                 KC_Y,                 KC_H,              KC_A,              KC_E,              KC_I,
    KC_X,              KC_Q,              KC_M,              KC_C,              KC_Z,                 KC_K,                 KC_P,              KC_QUOT,           KC_SCLN,           KC_DOT,
                                          LT(MOUSE, KC_ESC), LT(NAV, KC_SPC),   KC_LSFT,              LT(SYM, KC_ENT),      LT(NUM, KC_BSPC),  KC_DEL
  ),
#endif

  [NAV] = LAYOUT_split_3x5_3(
    KC_TAB,            XXXXXXX,           XXXXXXX,           KC_TAB,            XXXXXXX,              U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           XXXXXXX,              KC_LEFT,              KC_DOWN,           KC_UP,             KC_RGHT,           KC_CAPS,
    XXXXXXX,           KC_ALGR,           XXXXXXX,           CW_TOGG,           XXXXXXX,              KC_HOME,              KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,
                                          XXXXXXX,           XXXXXXX,           XXXXXXX,              XXXXXXX,              XXXXXXX,           XXXXXXX
  ),

  [MOUSE] = LAYOUT_split_3x5_3(
    XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,              U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           XXXXXXX,              KC_MS_L,              KC_MS_D,           KC_MS_U,           KC_MS_R,           XXXXXXX,
    XXXXXXX,           KC_ALGR,           XXXXXXX,           XXXXXXX,           XXXXXXX,              KC_WH_L,              KC_WH_D,           KC_WH_U,           KC_WH_R,           XXXXXXX,
                                          XXXXXXX,           XXXXXXX,           XXXXXXX,              KC_BTN1,              KC_BTN3,           KC_BTN2
  ),

  [NUM] = LAYOUT_split_3x5_3(
    KC_7,              KC_5,              KC_3,              KC_1,              KC_9,                 KC_8,                 KC_0,              KC_2,              KC_4,              KC_6,
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_F11,               KC_F10,               KC_RSFT,           KC_RCTL,           KC_LALT,           KC_LGUI,
    KC_F7,             KC_F5,             KC_F3,             KC_F1,             KC_F9,                KC_F8,                KC_F12,            KC_F2,             KC_F4,             KC_F6,
                                          XXXXXXX,           XXXXXXX,           XXXXXXX,              XXXXXXX,              XXXXXXX,           XXXXXXX
  ),


  [SYM] = LAYOUT_split_3x5_3(
    KC_AT,             KC_LBRC,           KC_LCBR,           KC_LPRN,           KC_LT,                KC_GT,                KC_RPRN,           KC_RCBR,           KC_RBRC,           KC_GRV,
    KC_PMNS,           KC_PAST,           KC_EQL,            KC_UNDS,           KC_DLR,               KC_HASH,              KC_RSFT,           KC_RCTL,           KC_LALT,           KC_LGUI,
    KC_PLUS,           KC_PIPE,           KC_PERC,           KC_PSLS,           KC_TILD,              KC_CIRC,              KC_BSLS,           KC_AMPR,           KC_QUES,           KC_EXLM,
                                          XXXXXXX,           XXXXXXX,           XXXXXXX,              XXXXXXX,              XXXXXXX,           XXXXXXX
  ),

  // TODO: Create "slow" versions of dead keys here
  [UML] = LAYOUT_split_3x5_3(
    XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,              XXXXXXX,              XXXXXXX,           RALT(KC_P),        RALT(KC_Y),        KC_GRV,
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           XXXXXXX,              XXXXXXX,              XXXXXXX,           RALT(KC_Q),        XXXXXXX,           XXXXXXX,
    XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_TILD,              KC_CIRC,              XXXXXXX,           KC_QUOT,           KC_SCLN,           XXXXXXX,
                                          XXXXXXX,           XXXXXXX,           XXXXXXX,              XXXXXXX,              XXXXXXX,           XXXXXXX
  ),
};

// Short aliases for home row mods and other tap-hold keys.
#define HOME_N LGUI_T(KC_N)
#define HOME_R LALT_T(KC_R)
#define HOME_T LCTL_T(KC_T)
#define HOME_S LSFT_T(KC_S)
#define HOME_H RSFT_T(KC_H)
#define HOME_A RCTL_T(KC_A)
#define HOME_E LALT_T(KC_E)
#define HOME_I LGUI_T(KC_I)
#define HOME_NAV LT(NAV, KC_SPC)
#define HOME_MOUSE LT(MOUSE, KC_TAB)
#define HOME_SYM LT(SYM, KC_ENT)
#define HOME_NUM LT(NUM, KC_BSPC)
#define HOME_UML LT(UML, KC_DEL)

bool is_shift_pressed = false;

// Achordion --------------------------------------------------------------------
    // https://getreuer.info/posts/keyboards/achordion/index.html#achordion_eager_mod
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }

  switch (keycode) {
    case KC_LSFT:
    case KC_RSFT:
      if (!record->event.pressed) {
        is_shift_pressed = true;
      } else {
        is_shift_pressed = false;
      }
      break;
    // These are dead keys we want to send immediately by sending a KC_SPC after the keycode
    case KC_QUOT:
    case KC_SCLN:
    case KC_GRV:
    case KC_TILD:
    case KC_CIRC:
      if (IS_LAYER_OFF(UML) && !record->event.pressed) {
        // We only care about the shifted state of KC_SCLN
        if (!(keycode == KC_SCLN && !is_shift_pressed)) {
          tap_code(KC_SPC);
        }
      }
      break;
  }

  return true;
}

void matrix_scan_user(void) {
  achordion_task();
}

bool achordion_eager_mod(uint8_t mod) {
  switch (mod) {
    case MOD_LSFT:
    case MOD_RSFT:
    case MOD_LCTL:
    case MOD_RCTL:
      return true;  // Eagerly apply Shift and Ctrl mods.

    default:
      return false;
  }
}

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
  // Exceptionally allow specific chords on the same hand
  // switch (tap_hold_keycode) {
  //   case HOME_A:  // Nonsense example
  //     if (other_keycode == HOME_U) { return true; }
  //     break;
  // }

  // Allow all chords from thumb keys
  if (tap_hold_record->event.key.row == 3) { return true; }

  // Alternatively allow only specific thumb keys
  switch (tap_hold_keycode) {
    case HOME_NAV:
    case HOME_MOUSE:
    case HOME_SYM:
    case HOME_NUM:
    case HOME_UML:
      return true;
      break;
  }

  // Also allow same-hand holds when the other key is in the rows below the alphas
  if (other_record->event.key.row % (MATRIX_ROWS / 2) >= 4) { return true; }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_streak_chord_timeout(uint16_t tap_hold_keycode, uint16_t next_keycode) {
  if (IS_QK_LAYER_TAP(tap_hold_keycode)) {
    return 0;  // Disable streak detection on layer-tap keys.
  }

  // Exceptions so that certain hotkeys don't get blocked as streaks.
  // switch (tap_hold_keycode) {
  //   case HOME_A:
  //     if (next_keycode == KC_C || next_keycode == KC_V) {
  //       return 0;
  //     }
  //     break;
  // }

  // Otherwise, tap_hold_keycode is a mod-tap key.
  uint8_t mod = mod_config(QK_MOD_TAP_GET_MODS(tap_hold_keycode));
  if ((mod & MOD_LSFT) != 0) {
    return 100;  // A shorter streak timeout for Shift mod-tap keys.
  } else {
    return 220;  // A longer timeout otherwise.
  }
}

// Tap-hold configuration
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    case HOME_R:
    case HOME_E:
      return TAPPING_TERM + 25;
    case HOME_N:
    case HOME_I:
      return TAPPING_TERM + 75;
    default:
      return TAPPING_TERM;
  }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t* record) {
  // If you quickly hold a tap-hold key after tapping it, the tap action is
  // repeated. Key repeating is useful e.g. for Vim navigation keys, but can
  // lead to missed triggers in fast typing. Here, returning 0 means we
  // instead want to "force hold" and disable key repeating.
  switch (keycode) {
    case HOME_N:
      return QUICK_TAP_TERM;  // Enable key repeating.
    default:
      return 0;  // Otherwise, force hold and disable key repeating.
  }
}

// Caps word
#ifdef CAPS_WORD_ENABLE
bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
    // Keycodes that continue Caps Word, with shift applied.
    case KC_A ... KC_Z:
      add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to the next key.
      return true;

    // Keycodes that continue Caps Word, without shifting.
    case KC_1 ... KC_0:
    case KC_BSPC:
    case KC_DEL:
    case KC_UNDS:
      return true;

    default:
      return false;  // Deactivate Caps Word.
  }
}
#endif  // CAPS_WORD_ENABLE

