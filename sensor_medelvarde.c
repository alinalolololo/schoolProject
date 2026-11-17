#include "verktyg.h"

double medelvarde_sensorregister(Sensormatning *reg, int antal)
{
    double sum = 0;

    for (int i = 0; i < antal; i++)
    {
        sum += reg[i].varde;
    }

    return sum / antal;
}