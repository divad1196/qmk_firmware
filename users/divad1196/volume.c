
#include "quantum.h"

// This requires to compile with "EXTRAKEY_ENABLE"

void apply_volume_with_cooldown(int32_t norm, int threshold, int cooldown) {
    static uint16_t last_vol_time = 0;

    // Only allow a volume tap if enough motion has occurred AND the cooldown has passed
    if (abs(norm) > threshold) {
        if (timer_elapsed(last_vol_time) > cooldown) {
            enum qk_keycode_defines qk = norm > 0 ? KC_VOLU : KC_VOLD;

            // Simple step (ignore cumulative motion for smoothness)
            tap_code(qk);
            last_vol_time = timer_read();
        }
    }
}

void apply_volume_with_acceleration(int32_t norm, int threshold, int accel_factor) {
    static int32_t accumulated_norm = 0; // Use int32_t for safety
    int step_count = 0;

    // Add current motion to accumulator
    accumulated_norm += norm;

    // Determine the keycode based on the accumulated direction
    enum qk_keycode_defines qk = accumulated_norm > 0 ? KC_VOLU : KC_VOLD;
    int32_t abs_accel = abs(accumulated_norm);

    // Apply variable threshold (Acceleration)
    // The faster you move (larger |accumulated_norm|), the smaller the effective threshold becomes
    // This makes it accelerate: (THRESHOLD - (abs_accel / ACCEL_FACTOR))
    threshold = (threshold * 100) / (100 + abs_accel / accel_factor);

    // Ensure threshold doesn't drop to zero or below
    if (threshold < 5) {
        threshold = 5;
    }

    // Check motion and apply steps
    while (abs_accel >= threshold) {
        tap_code(qk);

        // Consume the motion
        if (accumulated_norm > 0) {
            accumulated_norm -= threshold;
        } else {
            accumulated_norm += threshold;
        }

        abs_accel = abs(accumulated_norm);
        step_count++;

        // **Limit to one step per report for smoothness**
        // The rest of the motion will be processed on the next report
        if (step_count >= 1) {
            break;
        }
    }
}
