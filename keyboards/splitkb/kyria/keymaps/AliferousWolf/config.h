/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
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

#pragma once

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 150
#endif
#define RGBLIGHT_SLEEP //RGB lighting will be switched off when the host goes to sleep


#define IGNORE_MOD_TAP_INTERRUPT // Lets you roll mod-tap keys


#define OLED_DISPLAY_128X64 // Sets correct OLED size
#define OLED_TIMEOUT 0 //Set OLED timout. Set to 0 for always on


// Allows the use of WPM and mods/indicator on slave side
#define SPLIT_WPM_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_POINTING_ENABLE
//#define POINTING_DEVICE_ENABLE


// Defines the pimoroni trackball settings
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_COMBINED
#define POINTING_DEVICE_INVERT_X_RIGHT
#define POINTING_DEVICE_INVERT_Y_RIGHT
//#define TRACKBALL_LED_TIMEOUT 5000 //RGBW timeout in ms
//#define POINTING_DEVICE_ROTATION_90 //Doesn't seem to work
//#define TRACKBALL_REVERSE_VSCROLL true //Vertical scroll
//#define TRACKBALL_REVERSE_HSCROLL true //Horizontal scroll
#define MOUSE_EXTENDED_REPORT //should help smooth trackball - doesn't seem to do anything for me



/* Used to set different values than default for trackball
// #define PIMORONI_TRACKBALL_TIMEOUT
// #define PIMORONI_TRACKBALL_SCALE
// #define PIMORONI_TRACKBALL_DEBOUNCE_CYCLES
// #define PIMORONI_TRACKBALL_ERROR_COUNT
*/

// #define RGBLIGHT_SPLIT

