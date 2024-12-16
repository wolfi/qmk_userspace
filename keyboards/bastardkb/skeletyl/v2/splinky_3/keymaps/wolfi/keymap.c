#include QMK_KEYBOARD_H

#include "keymap.h"
#include "features/achordion.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT_split_3x5_3(
    KC_B,              KC_L,              KC_D,              KC_W,              KC_V,                 KC_J,                 KC_F,              KC_O,              KC_U,              KC_COMM,
    LGUI_T(KC_N),      LALT_T(KC_R),      LCTL_T(KC_T),      LSFT_T(KC_S),      KC_G,                 KC_Y,                 LSFT_T(KC_H),      LCTL_T(KC_A),      LALT_T(KC_E),      LGUI_T(KC_I),
    LT(BUTTON,KC_X),   ALGR_T(KC_Q),      KC_M,              KC_C,              KC_Z,                 KC_K,                 KC_P,              KC_QUOT,           ALGR_T(KC_SCLN),   LT(BUTTON,KC_DOT),
                                          LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB),    LT(SYM, KC_ENT),      LT(NUM, KC_BSPC),  LT(FUN, KC_DEL)
  ),

  [NAV] = LAYOUT_split_3x5_3(
    XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,              U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           XXXXXXX,              KC_LEFT,              KC_DOWN,           KC_UP,             KC_RGHT,           KC_CAPS,
    XXXXXXX,           KC_ALGR,           XXXXXXX,           XXXXXXX,           XXXXXXX,              KC_HOME,              KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,
                                          XXXXXXX,           XXXXXXX,           XXXXXXX,              KC_ENT,               KC_BSPC,           KC_DEL
  ),

  [MOUSE] = LAYOUT_split_3x5_3(
    XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,              U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           XXXXXXX,              KC_MS_L,              KC_MS_D,           KC_MS_U,           KC_MS_R,           XXXXXXX,
    XXXXXXX,           KC_ALGR,           XXXXXXX,           XXXXXXX,           XXXXXXX,              KC_WH_L,              KC_WH_D,           KC_WH_U,           KC_WH_R,           XXXXXXX,
                                          XXXXXXX,           XXXXXXX,           XXXXXXX,              KC_BTN1,              KC_BTN3,           KC_BTN2
  ),

  [MEDIA] = LAYOUT_split_3x5_3(
    XXXXXXX,             XXXXXXX,         XXXXXXX,           XXXXXXX,           XXXXXXX,              RGB_TOG,              RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,
    KC_LGUI,             KC_LALT,         KC_LCTL,           KC_LSFT,           XXXXXXX,              KC_MPRV,              KC_VOLD,           KC_VOLU,           KC_MNXT,           OU_AUTO,
    XXXXXXX,             KC_ALGR,         XXXXXXX,           XXXXXXX,           XXXXXXX,              XXXXXXX,              XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
                                          XXXXXXX,           XXXXXXX,           XXXXXXX,              KC_MSTP,              KC_MPLY,           KC_MUTE
  ),

  [NUM] = LAYOUT_split_3x5_3(
    KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,              XXXXXXX,              XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
    KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,               XXXXXXX,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,
    KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,              XXXXXXX,              XXXXXXX,           XXXXXXX,           KC_ALGR,           XXXXXXX,
                                          KC_DOT,            KC_0,              KC_MINS,              XXXXXXX,              XXXXXXX,           XXXXXXX
  ),

  [SYM] = LAYOUT_split_3x5_3(
    KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,              XXXXXXX,              XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
    KC_COLN,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,              XXXXXXX,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,
    KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,              XXXXXXX,              XXXXXXX,           XXXXXXX,           KC_ALGR,           XXXXXXX,
                                          KC_LPRN,           KC_RPRN,           KC_UNDS,              XXXXXXX,              XXXXXXX,           XXXXXXX
  ),

  [FUN] = LAYOUT_split_3x5_3(
    KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,              XXXXXXX,              XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
    KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,              XXXXXXX,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,
    KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,              XXXXXXX,              XXXXXXX,           XXXXXXX,           KC_ALGR,           XXXXXXX,
                                          KC_APP,            KC_SPC,            KC_TAB,               XXXXXXX,              XXXXXXX,           XXXXXXX
  ),

  [BUTTON] = LAYOUT_split_3x5_3(
    U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,
    KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_NO,             KC_NO,             KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,
    U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,
                                          KC_BTN2,           KC_BTN3,           KC_BTN1,           KC_BTN1,           KC_BTN3,           KC_BTN2
  ),
};


// Achordion --------------------------------------------------------------------
// https://getreuer.info/posts/keyboards/achordion/index.html#achordion_eager_mod
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }

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
// ------------------------------------------------------------------------------

/*
// Tap-hold configuration
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t* record) {
  // If you quickly hold a tap-hold key after tapping it, the tap action is
  // repeated. Key repeating is useful e.g. for Vim navigation keys, but can
  // lead to missed triggers in fast typing. Here, returning 0 means we
  // instead want to "force hold" and disable key repeating.
  switch (keycode) {
    case HOME_N:
    // Repeating is useful for Vim navigation keys.
    case QHOME_J:
    case QHOME_K:
    case QHOME_L:
      return QUICK_TAP_TERM;  // Enable key repeating.
    default:
      return 0;  // Otherwise, force hold and disable key repeating.
  }
}
*/

// shift functions
const key_override_t capsword_key_override = ko_make_basic(MOD_MASK_SHIFT, CW_TOGG, KC_CAPS);
const key_override_t *key_overrides[] = {
	&capsword_key_override
};


// thumb combos
#if defined (MIRYOKU_KLUDGE_THUMBCOMBOS)
const uint16_t PROGMEM thumbcombos_base_right[] = {LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), COMBO_END};
const uint16_t PROGMEM thumbcombos_base_left[] = {LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB), COMBO_END};
const uint16_t PROGMEM thumbcombos_nav[] = {KC_ENT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM thumbcombos_mouse[] = {KC_BTN2, KC_BTN1, COMBO_END};
const uint16_t PROGMEM thumbcombos_media[] = {KC_MSTP, KC_MPLY, COMBO_END};
const uint16_t PROGMEM thumbcombos_num[] = {KC_0, KC_MINS, COMBO_END};
  #if defined (MIRYOKU_LAYERS_FLIP)
const uint16_t PROGMEM thumbcombos_sym[] = {KC_UNDS, KC_LPRN, COMBO_END};
  #else
const uint16_t PROGMEM thumbcombos_sym[] = {KC_RPRN, KC_UNDS, COMBO_END};
  #endif
const uint16_t PROGMEM thumbcombos_fun[] = {KC_SPC, KC_TAB, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(thumbcombos_base_right, LT(U_FUN, KC_DEL)),
  COMBO(thumbcombos_base_left, LT(U_MEDIA, KC_ESC)),
  COMBO(thumbcombos_nav, KC_DEL),
  COMBO(thumbcombos_mouse, KC_BTN3),
  COMBO(thumbcombos_media, KC_MUTE),
  COMBO(thumbcombos_num, KC_DOT),
  #if defined (MIRYOKU_LAYERS_FLIP)
  COMBO(thumbcombos_sym, KC_RPRN),
  #else
  COMBO(thumbcombos_sym, KC_LPRN),
  #endif
  COMBO(thumbcombos_fun, KC_APP)
};
#endif
