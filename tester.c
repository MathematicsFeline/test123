#include "pico/stdlib.h"
#include <stdio.h>

int funkcja(bool led_on) {
    printf("C\n");
    gpio_put(PICO_DEFAULT_LED_PIN, led_on);
    return PICO_OK;
}