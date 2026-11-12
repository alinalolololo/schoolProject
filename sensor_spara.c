#include<stdio.h>
#include "verktyg.h"
#include<stdlib.h>

void spara_sensorregister(const char *filnamn,const Sensormatning sensorregister[],int antal)
{
    FILE *fil = fopen(filnamn, "w");
    if (fil == NULL)
    {
        printf("Kunde inte öppna filen %s för skrivning.\n", filnamn);
        return;
    }
    for (int i = 0; i < antal; i++)
    {
        fprintf(fil, "%s %.2f\n",
                sensorregister[i].namn,
                sensorregister[i].varde);
    }

    
    fclose(fil);
}
                        