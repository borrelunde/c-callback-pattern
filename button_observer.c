#include "button_observer.h"

#include <memory.h>

#include "container_of.h"
#include "log.h"

void button_observer_on_button_callback(struct button_callback *callback) {
    struct button_observer *self = CONTAINER_OF(callback, struct button_observer, callback);
    LOG("Observer on button callback.");
}

void button_observer_init(struct button_observer *self, struct button *button) {
    LOG("Button observer initialising.");
    memset(self, 0, sizeof(*self));
    self->button = button;
    self->callback.callback = button_observer_on_button_callback;
    button_add_callback(self->button, &self->callback);
    LOG("Button observer initialised.");
}

void button_observer_deinit(struct button_observer *self) {
    LOG("Button observer deinitialising.");
    if (self->button != NULL) {
        button_remove_callback(self->button);
    }
    LOG("Button observer deinitialised.");
}
