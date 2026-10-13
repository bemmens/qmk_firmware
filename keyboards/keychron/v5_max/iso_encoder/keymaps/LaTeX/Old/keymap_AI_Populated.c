/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"
// #include "sendstring_uk.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
    LATEX_BASE,
    LATEX_SHIFT,
    LATEX_LCRTL,
    LATEX_RCRTL,
    UC_BASE,
    UC_SHIFT,
    UC_LCRTL,
    UC_RCRTL
};

enum custom_keycodes {
    // Greek letters
    TX_alpha = SAFE_RANGE,
    TX_beta,
    TX_gamma,
    TX_delta,
    TX_epsilon,
    TX_zeta,
    TX_eta,
    TX_theta,
    TX_iota,
    TX_kappa,
    TX_lambda,
    TX_mu,
    TX_nu,
    TX_xi,
    TX_omicron,
    TX_pi,
    TX_rho,
    TX_sigma,
    TX_tau,
    TX_upsilon,
    TX_phi,
    TX_chi,
    TX_psi,
    TX_omega,

    // Upper Case Greek letters
    TX_ALPHA,
    TX_BETA,
    TX_GAMMA,
    TX_DELTA,
    TX_EPSILON,
    TX_ZETA,
    TX_ETA,
    TX_THETA,
    TX_IOTA,
    TX_KAPPA,
    TX_LAMBDA,
    TX_MU,
    TX_NU,
    TX_XI,
    TX_OMICRON,
    TX_PI,
    TX_RHO,
    TX_SIGMA,
    TX_TAU,
    TX_UPSILON,
    TX_PHI,
    TX_CHI,
    TX_PSI,
    TX_OMEGA,

    // Operators
    TX_FRAC, //
    TX_SQRT, //
    TX_x10, //
    TX_LIM, //
    TX_SIM,
    TX_APRROX,
    TX_NEQ,
    TX_TIMES,
    TX_DIV,
    TX_PM,
    TX_MP,
    TX_NABLA,
    TX_PDIFF,
    TX_INT,
    TX_2INT,
    TX_3INT,
    TX_INT_CIRC,
    TX_INT_CIRC2,
    TX_INT_CIRC3,
    TX_CONV,
    TX_DOT,
    TX_SUM,
    TX_PROD,
    TX_IMPLIES,
    TX_MAP,
    TX_FLOOR,
    TX_CEIL,
    TX_REAL,
    TX_IMAG,
    TX_DAGGER,
    TX_INF,
    TX_ALEPH,
    TX_ANGLE,
    TX_PARALLEL,
    TX_PERP,
    TX_BRA,
    TX_KET,
    TX_THEREFORE,
    TX_ELIPS,
    TX_G8TEQ,
    TX_LSTEQ,
    TX_MCHGR,
    TX_MCHLS,
    TX_No,
    TX_QNoL,
    TX_CIRCPLUS,
    TX_CIRCPROD,
    TX_CIRCDOT,

    // misc
    TX_Circ,
    TX_Overbar,
    TX_Underbar,
    TX_Vec,

    TX_SS,
    TX_ae,
    TX_oDK,
    TX_hbar,
    TX_DEG,
    TX_ElOf,
    TX_BIN,
    TX_SUB,
    TX_SUP,
    TX_DIAM,
    TX_sigma_alt,
    TX_theta_alt,
    TX_PROP,
    TX_RARROW,
    TX_LARROW,
    TX_EST,

    // LATEX Music
    TX_Sharp,
    TX_Flat,
    TX_Natural,

    // Fonts
    TX_MIT,
    TX_MBF,
    TX_MDS,
    TX_Mtt,
    TX_MFRK,
    TX_MCAL,
    TX_SI,

    FN_SCRSHT,
    FN_WIKI,
    FN_EMOJI,
    FN_ROMAN
};



// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_iso_99(
        KC_ESC,             KC_MPLY,  KC_MUTE,  _______, _______, KC_BRID,  KC_BRIU,  RGB_MOD,  LGUI(LSFT(KC_4)),  FN_WIKI,  KC_WWW_SEARCH,    FN_EMOJI,  FN_ROMAN,            KC_DEL,   KC_HOME,  KC_END,     KC_MUTE,
        KC_NUBS,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_P7,    KC_P8,    KC_P9,      KC_PPLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,  KC_GRV ,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,      KC_PENT,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT               ),

    [MAC_FN] = LAYOUT_iso_99(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             _______,  _______,  _______,    RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,    _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,    _______,                      _______,  _______,  _______,    _______,
        TG(UC_BASE),  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,    TG(LATEX_BASE),  _______,     _______,  _______,  _______,    _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______            ),

    [WIN_BASE] = LAYOUT_iso_99(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,     KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_P7,    KC_P8,    KC_P9,      KC_PPLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,      KC_PENT,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT            ),

    [WIN_FN] = LAYOUT_iso_99(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,    KC_VOLD,  KC_VOLU,            _______,  _______,  _______,    RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,    _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,   _______,    _______,                      _______,  _______,  _______,    _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,              TG(LATEX_BASE),  _______,  _______,  _______,  _______,    _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______            ),

    [LATEX_BASE] = LAYOUT_iso_99(
        TG(LATEX_BASE),     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             TX_FRAC,   TX_SQRT,  TX_LIM,    KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     TX_DEG,     TX_BIN,    TX_NEQ,   KC_BSPC,            _______,  TX_DIV,  TX_CONV,    TX_DIAM,
        _______,   TX_psi,   TX_omega, TX_epsilon, TX_rho, TX_tau,   TX_upsilon, TX_ae,    TX_SS,     TX_oDK,     TX_pi,    TX_BRA,    TX_KET,                     TX_ElOf, TX_PERP, TX_Natural,    TX_REAL,
        _______,  TX_alpha, TX_sigma, TX_delta,   TX_phi, TX_gamma, TX_hbar,      TX_theta, TX_kappa, TX_lambda, TX_ELIPS, TX_QNoL,    TX_SUB,  KC_ENT,            TX_CIRCPLUS,   TX_PM,  TX_INF,
        MO(LATEX_SHIFT), TX_sigma_alt, TX_zeta, TX_xi, TX_chi, TX_nu,    TX_beta,      TX_eta,   TX_mu,    TX_LSTEQ,  TX_G8TEQ,   TX_No,      TG(LATEX_BASE),  _______,  _______,  TX_PROP, TX_PDIFF,   TX_SUM,
        MO(LATEX_LCRTL), _______,  _______,                                _______,                     _______,  MO(LATEX_RCRTL), _______,  _______,  _______,  _______,  TX_INT,    TX_RARROW            ),

    [LATEX_SHIFT] = LAYOUT_iso_99(
        TG(LATEX_BASE),     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,     KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     TX_MIT,     TX_MBF,     TX_MDS,     TX_Mtt,     TX_MFRK,     TX_MCAL,    TX_SI,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        _______,  TX_PSI,   TX_OMEGA, TX_EPSILON, TX_RHO, TX_TAU,   TX_UPSILON, TX_ae,    TX_SS,     TX_oDK,     TX_PI,    TX_FLOOR,    TX_CEIL,                      KC_P7,    KC_P8,    KC_P9,      KC_PPLS,
        _______,  TX_ALPHA, TX_SIGMA, TX_DELTA,   TX_PHI, TX_GAMMA, TX_hbar,      TX_THETA, TX_KAPPA, TX_LAMBDA, TX_THEREFORE, TX_theta_alt,    TX_SUP,  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        _______,  KC_NUBS,  TX_ZETA,  TX_XI,      TX_CHI, TX_NU,    _______,      TX_ETA,   TX_MU,    TX_MCHLS,  TX_MCHGR,   TX_EST,              KC_RSFT,  KC_UP,    KC_P1,    TX_CEIL,    KC_P3,      TX_REAL,
        _______,  _______,  _______,                                KC_SPC,                                 _______,  _______, _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT            ),

    [LATEX_LCRTL] = LAYOUT_iso_99(
        TG(LATEX_BASE),     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,     KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_P7,    KC_P8,    TX_Sharp,      KC_PPLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        _______,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,      KC_PENT,
        _______,  _______,  KC_LALT,                                KC_SPC,                                 KC_RALT,  _______, _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT            ),

    [LATEX_RCRTL] = LAYOUT_iso_99(
        TG(LATEX_BASE),     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,     KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        _______,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_P7,    KC_P8,    TX_Flat,      KC_PPLS,
        _______,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        _______,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,      KC_PENT,
        _______,  _______,  _______,                                KC_SPC,                                 _______,  _______, _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT            ),

    [UC_BASE] = LAYOUT_iso_99(
        TG(UC_BASE),        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,    KC_MUTE,
        UC(0x0300),   UC(0x0301),     UC(0x0302),     UC(0x0304),     UC(0x030A),     UC(0x0307),     UC(0x0308),     UC(0x0305),     UC(0x0332),     UC(0x20D7),     UC(0x00B0),     KC_MINS,    KC_EQL,   KC_BSPC,            UC(0x2044), UC(0x221A), UC(0x00D7), UC(0x2112),
        _______,   UC(0x03C8), UC(0x03C9), UC(0x03B5), UC(0x03C1), UC(0x03C4), UC(0x03C5), UC(0x00E6),    UC(0x00DF),     UC(0x00F8),     UC(0x03C0), KC_LBRC,    KC_RBRC,                     UC(0x2202), UC(0x222B), UC(0x22C5), UC(0x2020),
        _______,  UC(0x03B1), UC(0x03C3), UC(0x03B4), UC(0x03C6), UC(0x03B3), UC(0x210F),      UC(0x03B8), UC(0x03BA), UC(0x03BB), KC_SCLN, KC_QUOT,    KC_NUHS,  KC_ENT,            UC(0x2211),   _______,  UC(0x21D2),
        MO(UC_SHIFT), KC_NUBS, UC(0x03B6), UC(0x03BE), UC(0x03C7), UC(0x03BD), UC(0x03B2), UC(0x03B7), UC(0x03BC), KC_COMM,  KC_DOT,   KC_SLSH,      _______,  _______,  _______,  UC(0x230A), UC(0x22A5), UC(0x2111),
        MO(UC_LCRTL), KC_LWIN, KC_LALT,                                KC_SPC,                     KC_RALT,  MO(UC_RCRTL), KC_RCTL,  _______,  _______,  _______,  KC_P0,    KC_PDOT            ),

    [UC_SHIFT] = LAYOUT_iso_99(
        TG(UC_BASE),        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,     KC_MUTE,
        _______,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        _______,  UC(0x03A8), UC(0x03A9), UC(0x0395), UC(0x03A1), UC(0x03A4), UC(0x03A5), KC_U,    KC_I,     KC_O,     UC(0x03A0), KC_LBRC,    KC_RBRC,                      KC_P7,    KC_P8,    KC_P9,      KC_PPLS,
        _______,  UC(0x0391), UC(0x03A3), UC(0x0394), UC(0x03A6), UC(0x0393), KC_H,      UC(0x0398), UC(0x039A), UC(0x039B), KC_SCLN, KC_QUOT,    KC_NUHS,  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        _______,  KC_NUBS,  UC(0x0396), UC(0x039E), UC(0x03A7), UC(0x039D), _______,    UC(0x0397), UC(0x039C), KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    UC(0x2308), KC_P3,      UC(0x211C),
        _______,  _______,  _______,                                KC_SPC,                                 _______,  _______, _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT            ),

    [UC_LCRTL] = LAYOUT_iso_99(
        TG(UC_BASE),        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,     KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        _______,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_P7,    KC_P8,    UC(0x266F), KC_PPLS,
        _______,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        _______,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,      KC_PENT,
        _______,  _______,  KC_LALT,                                KC_SPC,                                 KC_RALT,  _______, _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT            ),

    [UC_RCRTL] = LAYOUT_iso_99(
        TG(UC_BASE),        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,     KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        _______,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_P7,    KC_P8,    UC(0x266D),  KC_PPLS,
        _______,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        _______,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,      KC_PENT,
        _______,  _______,  _______,                                KC_SPC,                                 _______,  _______, _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT            )

    
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [LATEX_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [LATEX_SHIFT] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [LATEX_LCRTL] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [LATEX_RCRTL] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [UC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [UC_SHIFT] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [UC_LCRTL] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [UC_RCRTL] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif // ENCODER_MAP_ENABLE

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }

    // LaTeX Macros
    switch (keycode) {
        case TX_alpha:
            if (record->event.pressed) {
                SEND_STRING("\\alpha");
            }
            return false;
        case TX_beta:
            if (record->event.pressed) {
                SEND_STRING("\\beta");
            }
            return false;
        case TX_gamma:
            if (record->event.pressed) {
                SEND_STRING("\\gamma");
            }
            return false;
        case TX_delta:
            if (record->event.pressed) {
                SEND_STRING("\\delta");
            }
            return false;
        case TX_epsilon:
            if (record->event.pressed) {
                SEND_STRING("\\epsilon");
            }
            return false;
        case TX_zeta:
            if (record->event.pressed) {
                SEND_STRING("\\zeta");
            }
            return false;
        case TX_eta:
            if (record->event.pressed) {
                SEND_STRING("\\eta");
            }
            return false;
        case TX_theta:
            if (record->event.pressed) {
                SEND_STRING("\\theta");
            }
            return false;
        case TX_iota:
            if (record->event.pressed) {
                SEND_STRING("\\iota");
            }
            return false;
        case TX_kappa:
            if (record->event.pressed) {
                SEND_STRING("\\kappa");
            }
            return false;
        case TX_lambda:
            if (record->event.pressed) {
                SEND_STRING("\\lambda");
            }
            return false;
        case TX_mu:
            if (record->event.pressed) {
                SEND_STRING("\\mu");
            }
            return false;
        case TX_nu:
            if (record->event.pressed) {
                SEND_STRING("\\nu");
            }
            return false;
        case TX_xi:
            if (record->event.pressed) {
                SEND_STRING("\\xi");
            }
            return false;
        case TX_omicron:
            if (record->event.pressed) {
                SEND_STRING("\\omicron");
            }
            return false;
        case TX_pi:
            if (record->event.pressed) {
                SEND_STRING("\\pi");
            }
            return false;
        case TX_rho:
            if (record->event.pressed) {
                SEND_STRING("\\rho");
            }
            return false;
        case TX_sigma:
            if (record->event.pressed) {
                SEND_STRING("\\sigma");
            }
            return false;
        case TX_tau:
            if (record->event.pressed) {
                SEND_STRING("\\tau");
            }
            return false;
        case TX_upsilon:
            if (record->event.pressed) {
                SEND_STRING("\\upsilon");
            }
            return false;
        case TX_phi:
            if (record->event.pressed) {
                SEND_STRING("\\phi");
            }
            return false;
        case TX_chi:
            if (record->event.pressed) {
                SEND_STRING("\\chi");
            }
            return false;
        case TX_psi:
            if (record->event.pressed) {
                SEND_STRING("\\psi");
            }
            return false;
        case TX_omega:
            if (record->event.pressed) {
                SEND_STRING("\\omega");
            }
            return false;
        case TX_ALPHA:
            if (record->event.pressed) {
            SEND_STRING("\\Alpha");
            }
            return false;
        case TX_BETA:
            if (record->event.pressed) {
            SEND_STRING("\\Beta");
            }
            return false;
        case TX_GAMMA:
            if (record->event.pressed) {
            SEND_STRING("\\Gamma");
            }
            return false;
        case TX_DELTA:
            if (record->event.pressed) {
            SEND_STRING("\\Delta");
            }
            return false;
        case TX_EPSILON:
            if (record->event.pressed) {
            SEND_STRING("\\Epsilon");
            }
            return false;
        case TX_ZETA:
            if (record->event.pressed) {
            SEND_STRING("\\Zeta");
            }
            return false;
        case TX_ETA:
            if (record->event.pressed) {
            SEND_STRING("\\Eta");
            }
            return false;
        case TX_THETA:
            if (record->event.pressed) {
            SEND_STRING("\\Theta");
            }
            return false;
        case TX_IOTA:
            if (record->event.pressed) {
            SEND_STRING("\\Iota");
            }
            return false;
        case TX_KAPPA:
            if (record->event.pressed) {
            SEND_STRING("\\Kappa");
            }
            return false;
        case TX_LAMBDA:
            if (record->event.pressed) {
            SEND_STRING("\\Lambda");
            }
            return false;
        case TX_MU:
            if (record->event.pressed) {
            SEND_STRING("\\Mu");
            }
            return false;
        case TX_NU:
            if (record->event.pressed) {
            SEND_STRING("\\Nu");
            }
            return false;
        case TX_XI:
            if (record->event.pressed) {
            SEND_STRING("\\Xi");
            }
            return false;
        case TX_OMICRON:
            if (record->event.pressed) {
            SEND_STRING("\\Omicron");
            }
            return false;
        case TX_PI:
            if (record->event.pressed) {
            SEND_STRING("\\Pi");
            }
            return false;
        case TX_RHO:
            if (record->event.pressed) {
            SEND_STRING("\\Rho");
            }
            return false;
        case TX_SIGMA:
            if (record->event.pressed) {
            SEND_STRING("\\Sigma");
            }
            return false;
        case TX_TAU:
            if (record->event.pressed) {
            SEND_STRING("\\Tau");
            }
            return false;
        case TX_UPSILON:
            if (record->event.pressed) {
            SEND_STRING("\\Upsilon");
            }
            return false;
        case TX_PHI:
            if (record->event.pressed) {
            SEND_STRING("\\Phi");
            }
            return false;
        case TX_CHI:
            if (record->event.pressed) {
            SEND_STRING("\\Chi");
            }
            return false;
        case TX_PSI:
            if (record->event.pressed) {
            SEND_STRING("\\Psi");
            }
            return false;
        case TX_OMEGA:
            if (record->event.pressed) {
            SEND_STRING("\\Omega");
            }
            return false;
        case TX_FRAC:
            if (record->event.pressed) {
            SEND_STRING("\\frac{}{}");
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            }
            return false;
        case TX_SQRT:
            if (record->event.pressed) {
            SEND_STRING("\\sqrt{}");
            tap_code(KC_LEFT);
            }
            return false;
        case TX_x10:
            if (record->event.pressed) {
            SEND_STRING("\\times 10^{}");
            tap_code(KC_LEFT);
            }
            return false;
        case TX_LIM:
            if (record->event.pressed) {
            SEND_STRING("\\lim_{}");
            tap_code(KC_LEFT);
            }
            return false;
        case TX_SIM:
            if (record->event.pressed) {
            SEND_STRING("\\sim");
            }
            return false;
        case TX_APRROX:
            if (record->event.pressed) {
            SEND_STRING("\\approx");
            }
            return false;
        case TX_NEQ:
            if (record->event.pressed) {
            SEND_STRING("\\neq");
            }
            return false;
        case TX_TIMES:
            if (record->event.pressed) {
            SEND_STRING("\\times");
            }
            return false;
        case TX_DIV:
            if (record->event.pressed) {
            SEND_STRING("\\div");
            }
            return false;
        case TX_PM:
            if (record->event.pressed) {
            SEND_STRING("\\pm");
            }
            return false;
        case TX_MP:
            if (record->event.pressed) {
            SEND_STRING("\\mp");
            }
            return false;
        case TX_NABLA:
            if (record->event.pressed) {
            SEND_STRING("\\nabla");
            }
            return false;
        case TX_PDIFF:
            if (record->event.pressed) {
            SEND_STRING("\\partial");
            }
            return false;
        case TX_INT:
            if (record->event.pressed) {
            SEND_STRING("\\int");
            }
            return false;
        case TX_2INT:
            if (record->event.pressed) {
            SEND_STRING("\\iint");
            }
            return false;
        case TX_3INT:
            if (record->event.pressed) {
            SEND_STRING("\\iiint");
            }
            return false;
        case TX_INT_CIRC:
            if (record->event.pressed) {
            SEND_STRING("\\oint");
            }
            return false;
        case TX_INT_CIRC2:
            if (record->event.pressed) {
            SEND_STRING("\\oiint");
            }
            return false;
        case TX_INT_CIRC3:
            if (record->event.pressed) {
            SEND_STRING("\\oiiint");
            }
            return false;
        case TX_CONV:
            if (record->event.pressed) {
            SEND_STRING("\\ast");
            }
            return false;
        case TX_DOT:
            if (record->event.pressed) {
            SEND_STRING("\\cdot");
            }
            return false;
        case TX_SUM:
            if (record->event.pressed) {
            SEND_STRING("\\sum");
            }
            return false;
        case TX_PROD:
            if (record->event.pressed) {
            SEND_STRING("\\prod");
            }
            return false;
        case TX_IMPLIES:
            if (record->event.pressed) {
            SEND_STRING("\\implies");
            }
            return false;
        case TX_MAP:
            if (record->event.pressed) {
            SEND_STRING("\\mapsto");
            }
            return false;
        case TX_FLOOR:
            if (record->event.pressed) {
            SEND_STRING("\\lfloor \\rfloor");
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            }
            return false;
        case TX_CEIL:
            if (record->event.pressed) {
            SEND_STRING("\\lceil \\rceil");
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            tap_code(KC_LEFT);
            }
            return false;
        case TX_REAL:
            if (record->event.pressed) {
            SEND_STRING("\\Re");
            }
            return false;
        case TX_IMAG:
            if (record->event.pressed) {
            SEND_STRING("\\Im");
            }
            return false;
        case TX_DAGGER:
            if (record->event.pressed) {
            SEND_STRING("\\dagger");
            }
            return false;
        case TX_INF:
            if (record->event.pressed) {
            SEND_STRING("\\infty");
            }
            return false;
        case TX_ALEPH:
            if (record->event.pressed) {
            SEND_STRING("\\aleph");
            }
            return false;
        case TX_ANGLE:
            if (record->event.pressed) {
            SEND_STRING("\\angle");
            }
            return false;
        case TX_PARALLEL:
            if (record->event.pressed) {
            SEND_STRING("\\parallel");
            }
            return false;
        case TX_PERP:
            if (record->event.pressed) {
            SEND_STRING("\\perp");
            }
            return false;
        case TX_BRA:
            if (record->event.pressed) {
            SEND_STRING("\\langle");
            }
            return false;
        case TX_KET:
            if (record->event.pressed) {
            SEND_STRING("\\rangle");
            }
            return false;
        case TX_THEREFORE:
            if (record->event.pressed) {
            SEND_STRING("\\therefore");
            }
            return false;
        case TX_ELIPS:
            if (record->event.pressed) {
            SEND_STRING("\\ldots");
            }
            return false;
        case TX_G8TEQ:
            if (record->event.pressed) {
            SEND_STRING("\\geq");
            }
            return false;
        case TX_LSTEQ:
            if (record->event.pressed) {
            SEND_STRING("\\leq");
            }
            return false;
        case TX_MCHGR:
            if (record->event.pressed) {
            SEND_STRING("\\gg");
            }
            return false;
        case TX_MCHLS:
            if (record->event.pressed) {
            SEND_STRING("\\ll");
            }
            return false;
        case TX_No:
            if (record->event.pressed) {
            SEND_STRING("\\neg");
            }
            return false;
        case TX_QNoL:
            if (record->event.pressed) {
            SEND_STRING("\\forall");
            }
            return false;
        case TX_CIRCPLUS:
            if (record->event.pressed) {
            SEND_STRING("\\oplus");
            }
            return false;
        case TX_CIRCPROD:
            if (record->event.pressed) {
            SEND_STRING("\\otimes");
            }
            return false;
        case TX_Sharp:
            if (record->event.pressed) {
            SEND_STRING("\\sharp");
            }
            return false;
        case FN_WIKI:
            if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_WWW_SEARCH)SS_DELAY(500)"wikipedia"SS_DELAY(500)SS_TAP(X_ENT));
            }
            return false;
        case FN_EMOJI:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL)SS_DOWN(X_LCMD)SS_DOWN(X_SPC)SS_UP(X_LCTL)SS_UP(X_LCMD)SS_UP(X_SPC));
                }
                return false;
        case FN_ROMAN:
            if  (record->event.pressed) {
                SEND_STRING("I = 1"SS_TAP(X_ENT)"V = 5"SS_TAP(X_ENT)"X = 10"SS_TAP(X_ENT)"L = 50"SS_TAP(X_ENT)"C = 100"SS_TAP(X_ENT)"D = 500"SS_TAP(X_ENT)"M = 1,000"SS_TAP(X_ENT));
                }
                return false;
        case TX_Natural:
            if (record->event.pressed) {
                SEND_STRING("\\natural");
            }
            return false;
    }
    return true;
}  

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case UC_BASE:
            rgblight_sethsv_noeeprom(170, 255, 128); // Set backlight to navy blue
            break;
        case UC_SHIFT:
            rgblight_sethsv_noeeprom(170, 255, 255); // Set backlight to blue
            break;
        case UC_LCRTL:
            rgblight_sethsv_noeeprom(170, 255, 255); // Set backlight to blue
            break;
        case UC_RCRTL:
            rgblight_sethsv_noeeprom(170, 255, 255); // Set backlight to blue
            break;
        case LATEX_BASE:
            rgblight_sethsv_noeeprom(0, 0, 255); // Set backlight to white
            break;
        case LATEX_SHIFT:
            rgblight_sethsv_noeeprom(0, 0, 255); // Set backlight to white
            break;
        case LATEX_LCRTL:
            rgblight_sethsv_noeeprom(0, 0, 255); // Set backlight to white
            break;
        case LATEX_RCRTL:   
            rgblight_sethsv_noeeprom(0, 0, 255); // Set backlight to white
            break;
        case MAC_BASE:
            rgblight_sethsv_noeeprom(12, 255, 255); // Set backlight to red
            break;
        case MAC_FN:
            rgblight_sethsv_noeeprom(85, 255, 255); // Set backlight to green
            break;
        case WIN_FN:
            rgblight_sethsv_noeeprom(0, 255, 255); // Set backlight to red
            break;
        default:
            rgblight_sethsv_noeeprom(12, 255, 255); // Set backlight off
            break;
    }
    return state;
}


