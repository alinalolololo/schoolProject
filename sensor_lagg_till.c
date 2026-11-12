#include <string.h>
#include "verktyg.h"

Sensormatning *lagg_till_sensormatning(Sensormatning *reg, int *antal, 
    const char *namn, double varde) {
 
Sensormatning *ny_reg;

if (reg == NULL) {
    ny_reg = malloc(sizeof(Sensormatning));
} else {
    ny_reg = realloc(reg, (*antal + 1) * sizeof(Sensormatning));
}

if (ny_reg == NULL) {
    printf("Kunde inte allokera minne for sensorregistret.\n");
    return reg;
}

size_t size_of_name = sizeof(ny_reg->namn)/sizeof(ny_reg->namn[0]);

strncpy(ny_reg[*antal].namn, namn, size_of_name - 1);
ny_reg[*antal].namn[size_of_name] = '\0';

ny_reg[*antal].varde = varde;
*antal = *antal + 1;

return ny_reg;

//strncpy(ny_reg[*antal] -> namn, [sizeof(ny_reg[*antal].namn) - 1] = '0');
// öka antal med 1


 // TODO: kopiera in ”namn” i ny_reg[*antal].namn med strncpy,
 // och nollterminera sjalv (strncpy garanterar inte det). Satt
 // sedan ny_reg[*antal].varde till ”varde”, oka *antal med ett,
 // och returnera ny_reg.
 }