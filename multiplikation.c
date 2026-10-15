#include "stdio.h"
#include "verktyg.h"

void skriv_multiplikationstabell(int tal)
{
    for (int i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", tal, i, tal * i);
    }
}

void skriv_flera_tabeller(int tal[], int antal)
{
    for (int i = 0; i < antal; i++)
    {
        if (i > 0 && i < antal)
        {
            printf("----------\n");
        }
        skriv_multiplikationstabell(tal[i]);
    }
}