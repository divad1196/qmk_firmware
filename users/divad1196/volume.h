#pragma once

#include "quantum.h"


void apply_volume_with_cooldown(int32_t norm, int threshold, int cooldown);
void apply_volume_with_acceleration(int32_t norm, int threshold, int accel_factor);
