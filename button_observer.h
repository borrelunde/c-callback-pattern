#pragma once

#include "button.h"

struct button_observer {
    struct button *button;
    struct button_callback callback;
};

void button_observer_init(struct button_observer *self, struct button *button);
void button_observer_deinit(struct button_observer *self);