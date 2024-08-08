#pragma once

#define MASTER_LEFT
#define SPLIT_WPM_ENABLE
#define SPLIT_MODS_ENABLE

#define OLED_TIMEOUT 70000
#define OLED_BRIGHTNESS 70

#define RGBLIGHT_LAYERS
#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_HUE_STEP 6 // number of steps to cycle through the hue by
#define RGBLIGHT_SAT_STEP 6 // number of steps to increment the saturation by
#define RGBLIGHT_VAL_STEP 6 // number of steps to increment the brightness by
#define RGBLIGHT_SLEEP      //  the RGB lighting will be switched off when the host goes to sleep
#endif