#include <stdlib.h>
#include "verktyg.h"

double *ta_bort_senaste_matning(double *logg, int *antal)
{
    if (*antal == 0)
    {
        return logg;
    }

    if (*antal == 1)
    {
        free(logg);
        *antal = 0;
        return NULL;
    }

    double *ny_logg;
    ny_logg = realloc(logg, (*antal - 1) * sizeof(double));

    if (ny_logg == NULL)
    {
        return logg;
    }

    *antal = *antal - 1;

    return ny_logg;
}
