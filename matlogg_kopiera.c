#include<stdio.h>
#include "verktyg.h"
#include<stdlib.h>

/*Uppgift: matlogg_kopiera.c – kopiera_matlogg
Skapa en helt ny, separat kopia av loggen med malloc() – inte realloc() på den gamla
pekaren, kopian ska vara en egen, oberoende allokering – kopiera över samtliga antal värden,
och returnera pekaren till kopian. Om antal är 0, returnera NULL utan att allokera något.*/


double *kopiera_matlogg(double *logg, int antal)
{
    if (antal == 0)
    {
        return NULL;
    }

    double *kopia = malloc(antal * sizeof(*kopia));

    if (kopia == NULL)
    {
        printf("Kunde inte allokera minne!\n");
        return NULL;
    }

    for (int i = 0; i < antal; i++)
    {
        kopia[i] = logg[i];
    }

    return kopia;
}
