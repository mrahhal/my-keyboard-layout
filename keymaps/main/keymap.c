#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
};



#define DUAL_FUNC_0 LT(6, KC_K)
#define DUAL_FUNC_1 LT(2, KC_F10)
#define DUAL_FUNC_2 LT(15, KC_F15)
#define DUAL_FUNC_3 LT(2, KC_K)
#define DUAL_FUNC_4 LT(13, KC_Q)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSLS,        
    MT(MOD_LGUI, KC_TAB),KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MEH_T(KC_QUOTE),
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         ALL_T(KC_SLASH),KC_LEFT_GUI,    
                                                    KC_LEFT_ALT,    LT(5, KC_SPACE),                                LT(7, KC_ENTER),LT(9, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    DUAL_FUNC_0,    JP_ZHTG,        JP_KANA,        JP_MKANA,       KC_NO,          KC_NO,                                          KC_LANGUAGE_1,  KC_LANGUAGE_2,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    DUAL_FUNC_0,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          DE_EURO,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, DUAL_FUNC_3,    KC_TRANSPARENT, DUAL_FUNC_4,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_1,    DUAL_FUNC_2,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    DUAL_FUNC_0,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_RBRC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    DUAL_FUNC_0,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_NO,          KC_SPACE,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LCTL(KC_W),     LCTL(LSFT(KC_T)),KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    MO(6),          KC_EXLM,        KC_AT,          KC_HASH,        KC_LPRN,        KC_RPRN,                                        KC_KP_SLASH,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_NO,          
    KC_TRANSPARENT, KC_EQUAL,       KC_AMPR,        KC_ASTR,        KC_LCBR,        KC_RCBR,                                        KC_KP_ASTERISK, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     MEH_T(KC_GRAVE),
    KC_TRANSPARENT, KC_CIRC,        KC_DLR,         KC_PERC,        KC_LBRC,        KC_RBRC,                                        KC_KP_0,        KC_KP_1,        KC_KP_2,        KC_KP_3,        ALL_T(KC_KP_DOT),KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_ENTER,    KC_BSPC
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          LGUI(KC_E),     KC_F2,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [7] = LAYOUT_voyager(
    TOGGLE_LAYER_COLOR,RGB_TOG,        RGB_VAD,        RGB_VAI,        KC_NO,          KC_NO,                                          RGB_SLD,        RGB_MODE_FORWARD,RGB_SPD,        RGB_SPI,        KC_NO,          QK_LLCK,        
    KC_TRANSPARENT, KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,                                  KC_MS_WH_UP,    KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,     MO(8),          
    KC_TRANSPARENT, KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,                                          KC_MS_WH_DOWN,  KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_LABK,        KC_RABK,        KC_APPLICATION, KC_SPACE,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BSPC
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [9] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MS_BTN3,     KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_PAGE_UP,     KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_PGDN,        KC_NO,          
    KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_SPACE,                                       KC_ENTER,       KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    DUAL_FUNC_0,    ST_MACRO_0,     KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NUM,         
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          QK_DYNAMIC_TAPPING_TERM_UP,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          QK_DYNAMIC_TAPPING_TERM_DOWN,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          QK_DYNAMIC_TAPPING_TERM_PRINT,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
};


const uint16_t PROGMEM combo0[] = { KC_D, LT(7, KC_ENTER), LT(5, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_J, LT(7, KC_ENTER), LT(5, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_A, LT(7, KC_ENTER), LT(5, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_G, LT(7, KC_ENTER), LT(5, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo4[] = { LT(9, KC_BSPC), KC_LEFT_ALT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(2)),
    COMBO(combo1, TO(1)),
    COMBO(combo2, TO(3)),
    COMBO(combo3, TG(4)),
    COMBO(combo4, TO(10)),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,255}, {189,203,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,255}, {0,0,255}, {139,253,255}, {139,253,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {189,203,255}, {0,0,255} },

    [1] = { {0,244,224}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0} },

    [2] = { {0,244,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {15,255,255}, {15,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,255,255}, {0,0,0} },

    [3] = { {0,244,224}, {139,253,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {89,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {89,218,204}, {0,0,0} },

    [4] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,182,152}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,182,152}, {188,182,152}, {188,182,152}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {9,218,204}, {9,218,204}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {204,208,175}, {188,219,160}, {188,219,160}, {188,219,160}, {204,208,175}, {0,0,0}, {204,208,175}, {188,219,160}, {188,219,160}, {188,219,160}, {204,208,175}, {0,255,255}, {188,219,160}, {188,219,160}, {188,219,160}, {188,219,160}, {204,208,175}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {44,245,244}, {44,245,244}, {44,245,244}, {44,245,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,245,244}, {44,245,244}, {44,245,244}, {44,245,244}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {0,0,255}, {139,253,255}, {139,253,255}, {0,0,0}, {139,253,255}, {0,0,255}, {0,0,255}, {0,0,255}, {139,253,255}, {0,0,0}, {9,218,204}, {9,218,204}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,253,255}, {139,253,255}, {139,253,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,182,152}, {0,0,0}, {0,0,0}, {0,0,0}, {139,253,255}, {188,255,255}, {166,250,175}, {188,255,255}, {139,253,255}, {0,0,0}, {139,253,255}, {166,250,175}, {166,250,175}, {166,250,175}, {139,253,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,244,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {44,245,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,245,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,245,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 9:
        set_layer_color(9);
        break;
      case 10:
        set_layer_color(10);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8) ));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }
      } else {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_A);
        } else {
          unregister_code16(KC_A);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_AE);
        } else {
          unregister_code16(DE_AE);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_S);
        } else {
          unregister_code16(KC_S);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_SS);
        } else {
          unregister_code16(DE_SS);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_U);
        } else {
          unregister_code16(KC_U);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_UE);
        } else {
          unregister_code16(DE_UE);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_O);
        } else {
          unregister_code16(KC_O);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_OE);
        } else {
          unregister_code16(DE_OE);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

// ---

// https://docs.qmk.fm/#/tap_hold?id=hold-on-other-key-press
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Apply "Hold On Other Key Press" for these keys.
        case LT(7,KC_ENTER):
        case LT(9,KC_BSPC):
        case MT(MOD_LGUI, KC_TAB):
            return true;

        default:
            return false;
    }
}

// https://docs.qmk.fm/#/tap_hold?id=quick-tap-term
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Disable auto-repeat for these keys.
        case LT(5,KC_SPACE):
        case LT(7,KC_ENTER):
            return 0;

        default:
            return QUICK_TAP_TERM;
    }
}

// https://docs.qmk.fm/#/feature_layers?id=layer-change-code
layer_state_t layer_state_set_user(layer_state_t state) {
    // Need numlock to always be on, so this ensures that it is whenever we switch layers.
    // Numpad is on a non base layer so this works fine.
    // Not sure if there's a better place (matrix_init_user is too early to do that).
    if (!host_keyboard_led_state().num_lock) {
        tap_code(KC_NUM_LOCK);
    }

    // LED indicators
    // Implemented using voyager specific LED functions. Hard coded LED indicators depending
    // on the layer numbers in my main layout.
    bool LED_1 = false;
    bool LED_2 = false;
    bool LED_3 = false;
    bool LED_4 = false;

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        // Base layer
        case 0:
            break;

        // Language layers
        case 1:
        case 2:
        case 3:
        case 4:
            LED_1 = true;
            LED_3 = true;
            break;

        // MO layers accessed from the left side
        case 5:
        case 6:
            LED_1 = true;
            break;

        // MO layers accessed from the right side
        case 7:
        case 8:
        case 9:
            LED_3 = true;
            break;

        // Any other layer
        default:
            LED_2 = true;
            LED_4 = true;
            break;
    }

    STATUS_LED_1(LED_1);
    STATUS_LED_2(LED_2);
    STATUS_LED_3(LED_3);
    STATUS_LED_4(LED_4);

    return state;
}

// https://docs.qmk.fm/#/feature_key_overrides
const key_override_t *key_overrides[] = {
    // SHIFT+BSPC -> DEL
    &ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL),
    &ko_make_basic(MOD_MASK_SHIFT, LT(9,KC_BSPC), KC_DEL),

    // SHIFT+Numpad -> Fn keys
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_1, KC_F1),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_2, KC_F2),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_3, KC_F3),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_4, KC_F4),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_5, KC_F5),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_6, KC_F6),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_7, KC_F7),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_8, KC_F8),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_9, KC_F9),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_DOT, KC_F10),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_PLUS, KC_F11),
    &ko_make_basic(MOD_MASK_SHIFT, KC_KP_MINUS, KC_F12),

    // Null terminator is required at the end.
    NULL
};
