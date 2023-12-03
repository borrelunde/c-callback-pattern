#include "button.h"

#include <memory.h>

#include "log.h"

void button_init(struct button *self) {
    LOG("Button initialising.");
    memset(self, 0, sizeof(*self));
    LOG("Button initialised.");
}

void button_deinit(struct button *self) {
    LOG("Button deinitialising.");
    self->callback = NULL;
    LOG("Button deinitialised.");
}

void button_add_callback(struct button *self, struct button_callback *callback) {
    LOG("Button add callback.");
    self->callback = callback;
}

void button_remove_callback(struct button *self) {
    LOG("Button remove callback.");
    self->callback = NULL;
}

void button_press(struct button *self) {
    LOG("Button pressed...");

    if (self->callback == NULL) {
        LOG("... no callback is called.");
        return;
    }

    // Call the callback.
    LOG("... callback called.");
    self->callback->callback(self->callback);
}