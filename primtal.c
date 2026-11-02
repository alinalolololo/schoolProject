#include "verktyg.h"

// Uppdrag 1
int ar_primtal(int tal)
{
    if (tal < 2)
    {
        return 0;
    }

    for (int i = 2; i <= tal / i; i++)
    {
        if (tal % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Uppdrag 2
int raknar_primtal_i_array(int tal[], int antal)
{
    int count = 0;

    for (int i = 0; i < antal; i++)
    {
        if (ar_primtal(tal[i]))
        {
            count++;
        }
    }

    return count;
}


