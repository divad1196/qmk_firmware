#define KEYBALL_CPI_DEFAULT 500

/// Scroll behavior
#define ENABLE_ACCUMULATED_SCROLLING
#define SCROLL_START_THRESHOLD 1
// TODO: improve `keyball_on_apply_motion_to_mouse_scroll` for smooth scrolling with small movements


#define MOUSE_LAYER 1  // replace with your actual mouse layer number
#define TG_MOUSE TG(MOUSE_LAYER)
#define MOUSE_MOTION_TIMEOUT 1000  // ms after which we disable mouse layer

#define KEYBALL_SCROLL_DIV_DEFAULT 3
#define KEYBALL_SCROLLBALL_INHIVITOR 50

/// To disable scroll snap feature, define 0 in your config.h
#define KEYBALL_SCROLLSNAP_ENABLE 2
#define KEYBALL_SCROLLSNAP_RESET_TIMER 100
#define KEYBALL_SCROLLSNAP_TENSION_THRESHOLD 12
