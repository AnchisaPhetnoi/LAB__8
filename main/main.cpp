#include <stdio.h>

#include "SevenSegment.h"

SevenSegment s1(0);
SevenSegment s2(4);

extern "C" void app_main(void)
{
    while (1)
    {
        for (int i = 0; i < 9; i++)
        {
            s1.DisplayNumber(i);
            vTaskDelay(500 / portTICK_PERIOD_MS);

            s2.DisplayNumber((i+1) % 10);
            vTaskDelay(500 / portTICK_PERIOD_MS);
        }
    }
}