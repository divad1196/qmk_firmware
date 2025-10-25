// #include QMK_KEYBOARD_H
// #include <stdbool.h>
// #include <stdint.h>

#ifdef AUTO_MOUSE_DEFAULT_LAYER
#error "AUTO_MOUSE_DEFAULT_LAYER" is not compatible with my custom mouse definitions
#endif

void toggle_mouse_layer_on(void);
void mouse_layer_extend_timer(void);
void toggle_mouse_layer_off(void);
void refresh_mouse_layer(bool motion);
