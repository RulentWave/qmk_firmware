#include "curry.h"

#define LAYOUT_lily58_base( \
        K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
        K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
        K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A,  \
        K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A  \
    ) \
    LAYOUT_wrapper( \
        KC_ESC,  K01, K02, K03, K04, K05,                    K06, K07, K08, K09, K0A, KC_GRV,  \
        KC_TAB,  K11, K12, K13, K14, K15,                    K16, K17, K18, K19, K1A, KC_BSLS, \
        KC_LCTL, K21, K22, K23, K24, K25,                    K26, K27, K28, K29, K2A, KC_QUOT, \
        OS_LSFT, K31, K32, K33, K34, K35, KC_LBRC, KC_RBRC,  K36, K37, K38, K39, K3A, OS_RSFT, \
                 KC_LEAD, OS_LALT, LOWER, KC_SPC,  KC_ENT,   RAISE, KC_BSPC, OS_RGUI           \
    )
#define LAYOUT_lily58_base_wrapper(...) LAYOUT_lily58_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined(ENABLE_QWERTY)
    [_QWERTY] = LAYOUT_lily58_base_wrapper(
        ________________NUMBER_LEFT________________, ________________NUMBER_RIGHT_______________,
        _________________QWERTY_L1_________________, _________________QWERTY_R1_________________,
        _________________QWERTY_L2_________________, _________________QWERTY_R2_________________,
        _________________QWERTY_L3_________________, _________________QWERTY_R3_________________
    ),
#endif

#if defined(ENABLE_COLEMAK)
    [_COLEMAK] = LAYOUT_lily58_base_wrapper(
        ________________NUMBER_LEFT________________, ________________NUMBER_RIGHT_______________,
        _________________COLEMAK_L1________________, _________________COLEMAK_R1________________,
        _________________COLEMAK_L2________________, _________________COLEMAK_R2________________,
        _________________COLEMAK_L3________________, _________________COLEMAK_R3________________
    ),
#endif

#if defined(ENABLE_DVORAK)
    [_DVORAK] = LAYOUT_lily58_base_wrapper(
        ________________NUMBER_LEFT________________, ________________NUMBER_RIGHT_______________,
        _________________DVORAK_L1_________________, _________________DVORAK_R1_________________,
        _________________DVORAK_L2_________________, _________________DVORAK_R2_________________,
        _________________DVORAK_L3_________________, _________________DVORAK_R3_________________
    ),
#endif

    [_MODS] = LAYOUT_wrapper(
        _______, ___________________BLANK___________________,                    ___________________BLANK___________________, _______,
        _______, ___________________BLANK___________________,                    ___________________BLANK___________________, _______,
        _______, ___________________BLANK___________________,                    ___________________BLANK___________________, _______,
        KC_LSFT, ___________________BLANK___________________, _______,  _______, ___________________BLANK___________________, KC_RSFT,
                                   _______, _______, _______, _______,  _______, _______, _______, _______
    ),

    [_LOWER] = LAYOUT_wrapper( \
        _______, ___________________BLANK___________________,                    ___________________BLANK___________________, _______,
        KC_F11,  _________________LOWER_L1__________________,                    _________________LOWER_R1__________________, KC_F12,
        _______, _________________LOWER_L2__________________,                    _________________LOWER_R2__________________, _______,
        _______, _________________LOWER_L3__________________, _______,  _______, _________________LOWER_R3__________________, _______,
                                   _______, _______, _______, _______,  _______, _______, _______, _______
    ),

    [_RAISE] = LAYOUT_wrapper( \
        _______, ___________________BLANK___________________,                    ___________________BLANK___________________, _______,
        _______, _________________RAISE_L1__________________,                    _________________RAISE_R1__________________, _______,
        _______, _________________RAISE_L2__________________,                    _________________RAISE_R2__________________, _______,
        _______, _________________RAISE_L3__________________, _______,  _______, _________________RAISE_R3__________________, _______,
                                   _______, _______, _______, _______,  _______, _______, _______, _______
    ),

    [_ADJUST] = LAYOUT_wrapper( \
        _______, ___________________BLANK___________________,                    ___________________BLANK___________________, _______,
        KC_MAKE, _________________ADJUST_L1_________________,                    _________________ADJUST_R1_________________, KC_RST,
        VRSN,    _________________ADJUST_L2_________________,                    _________________ADJUST_R2_________________, EE_CLR,
        MG_NKRO, _________________ADJUST_L3_________________, _______,  _______, _________________ADJUST_R3_________________, RGB_IDL,
                                   _______, _______, _______, _______,  _______, _______, _______, _______
    ),
};
