#include <stdio.h>
#include "verktyg.h"

double celsius_till_fahrenheit(double celsius)
{
    double fahrenheit = 0.0;

    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    return fahrenheit;
}
void konvertera_serie(double *matningar, int antal) {



    //float celsius_temperatures[4] = {0.0, 20.0, 35.0, 100.0};
    //float fahrenheit;

    //int antal_värden = sizeof(celsius_temperatures) / sizeof(celsius_temperatures[0]);


    //En for loop som konverterar varje value till Fahrenheit
    for (int i = 0; i < antal; i++) {

        matningar[i] = (matningar[i] * 9.0 / 5.0) + 32.0;

        //Utskriften syns här
        //printf("%.1f Celsius\t\t%.1F Fahrenheit\n", matningar[i], fahrenheit);
    }
    return;
}