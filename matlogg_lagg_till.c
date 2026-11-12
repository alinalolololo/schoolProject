#include <stdlib.h>
#include <stdio.h>
#include "verktyg.h"

double *lagg_till_matning(double *logg, int *antal, double varde) {

    double *ny_logg;

    if (logg == NULL) {
        ny_logg = malloc(sizeof(double));
    } 
    else {
        ny_logg = realloc(logg, (*antal + 1) * sizeof(double));
    }

    if(ny_logg == NULL){
        printf("Kunde inte allokera nytt minne!!\n");
        return logg;
    }

    ny_logg[*antal] = varde;
    (*antal)++;
    return ny_logg;
}