#include "verktyg.h"
#include <string.h>

int hitta_sensor(Sensormatning *reg, int antal, const char *namn)
{
    for (int i = 0; i < antal; i++)
    {
        if (strcmp(reg->namn, namn) == 0)
        {
            return i;
        } 
        else
        {
            return -1;
        }
    }
}