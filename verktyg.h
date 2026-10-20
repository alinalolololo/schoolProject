#ifndef VERKTYG_H
#define VERKTYG_H

double celsius_till_fahrenheit(double celsius);
double rektangelarea(double bredd, double hojd);
void skriv_multiplikationstabell(int tal);
int ar_primtal(int tal);
void skriv_fizzbuzz(int fran, int till);
double berakna(double a, double b, char operatortecken);

void konvertera_serie(double *matningar, int antal);

void skriv_flera_tabeller(int tal[], int antal);
void swap(double *a, double *b);
void fizzbuzz_sammanfattning(int fran, int till, char sammanfattning[]);

#endif