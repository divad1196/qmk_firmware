#include QMK_KEYBOARD_H
#include <stdbool.h>
#include <stdint.h>

#ifdef MOUSE_LAYER
    static uint16_t last_motion = 0;
    static bool mouse_layer_auto = false;
    #ifndef MOUSE_MOTION_TIMEOUT
        #define MOUSE_MOTION_TIMEOUT 500
    #endif
#endif

void toggle_mouse_layer_on(void) {
#ifdef MOUSE_LAYER
    last_motion = timer_read();
    if (!layer_state_is(MOUSE_LAYER)) {
        layer_on(MOUSE_LAYER);
        mouse_layer_auto = true;
    }
#endif
}
void mouse_layer_extend_timer(void) {
#ifdef MOUSE_LAYER
    if (mouse_layer_auto) {
        toggle_mouse_layer_on();
    }
#endif
}
void toggle_mouse_layer_off(void) {
#ifdef MOUSE_LAYER
    if (mouse_layer_auto && layer_state_is(MOUSE_LAYER)) {
        layer_off(MOUSE_LAYER);
    }
    mouse_layer_auto = false;
#endif
}
