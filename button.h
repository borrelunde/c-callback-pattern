#pragma once

struct button {
    struct button_callback *callback;
};

struct button_callback {
    void (*callback)(struct button_callback *callback);
};

void button_init(struct button *self);
void button_deinit(struct button *self);

void button_add_callback(struct button *self, struct button_callback *callback);
void button_remove_callback(struct button *self);

void button_press(struct button *self);