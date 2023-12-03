#pragma once

#include "button.h"
#include "button_observer.h"

struct application {
    struct button button;
    struct button_observer observer;
};

void application_init(struct application *self);
void application_deinit(struct application *self);

void application_run(struct application *self);