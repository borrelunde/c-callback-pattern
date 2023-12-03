#include "application.h"

#include <memory.h>

#include "log.h"

void application_init(struct application *self) {
    LOG("Application initialising.");
    memset(self, 0, sizeof(*self));
    button_init(&self->button);
    button_observer_init(&self->observer, &self->button);
    LOG("Application initialised.");
}

void application_deinit(struct application *self) {
    LOG("Application deinitialising.");
    button_observer_deinit(&self->observer);
    button_deinit(&self->button);
    LOG("Application deinitialised.");
}

void application_run(struct application *self) {
    LOG("Application running.");
    button_press(&self->button);
    button_press(&self->button);
    LOG("Application ran.");
}