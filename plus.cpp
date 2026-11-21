#include "pico/stdlib.h"
#include <stdio.h>


#ifdef __cplusplus
extern "C" {
#endif


int cplus(bool led_on) {
    printf("C++\n");
    gpio_put(PICO_DEFAULT_LED_PIN, led_on);
    return PICO_OK;
}

#ifdef __cplusplus
}
#endif