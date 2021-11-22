#ifdef RGB_MATRIX_ENABLE

#    include "rgb_matrix.h"
#    include "config_led.h"

led_config_t g_led_config = {
        {
            {0,       1, 2,       3,     4,       5,  6,      7,      8,  9, 10, 11,     12,     13,},
            {14,     15, 16,     17,     18,     19, 20,     21,     22, 23, 24, 25,     26,     27,},
            {28,     29, 30,     31,     32,     33, 34,     35,     36, 37, 38, 39, NO_LED,     40,},
            {41, NO_LED, 42,     43,     44,     45, 46,     47,     48, 49, 50, 51,     52, NO_LED,},
            {53,     54, 55, NO_LED, NO_LED, NO_LED, 56, NO_LED, NO_LED, 57, 58, 59, NO_LED,     60,}
        },
        {
            {0, 0}, {17, 0}, {34, 0}, {52, 0}, {69, 0}, {86, 0}, {103, 0}, {121, 0}, {138, 0}, {155, 0}, {172, 0}, {190, 0}, {207, 0}, {224, 0},
            {0, 16}, {17, 16}, {34, 16}, {52, 16}, {69, 16}, {86, 16}, {103, 16}, {121, 16}, {138, 16}, {155, 16}, {172, 16}, {190, 16}, {207, 16}, {224, 16},
            {0, 32}, {17, 32}, {34, 32}, {52, 32}, {69, 32}, {86, 32}, {103, 32}, {121, 32}, {138, 32}, {155, 32}, {172, 32}, {190, 32}, {224, 32},
            {0, 48}, {17, 48}, {34, 48}, {52, 48}, {69, 48}, {86, 48}, {103, 48}, {121, 48}, {138, 48}, {155, 48}, {172, 48}, {224, 48},
            {0, 64}, {17, 64}, {34, 64}, {103, 64}, {172, 64}, {190, 64}, {207, 64}, {224, 64},

        },
        {
            4,4,4,4,4,4,4,4,4,4,
            4,4,4,4,4,4,4,4,4,4,
            4,4,4,4,4,4,4,4,4,4,
            4,4,4,4,4,4,4,4,4,4,
            4,4,4,4,4,4,4,4,4,4,
            4,4,4,4,4,4,4,4,4,4,
            4,
        }
};

#endif
