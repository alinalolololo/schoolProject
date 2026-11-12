#ifndef VERKTYG_H
#define VERKTYG_H

typedef struct {
char namn[50];
double varde;
} Sensormatning;

double celsius_till_fahrenheit(double celsius);
double rektangelarea(double bredd, double hojd);
void skriv_multiplikationstabell(int tal);
int ar_primtal(int tal);
void skriv_fizzbuzz(int fran, int till);
double berakna(double a, double b, char operatortecken);
int raknar_primtal_i_array(int tal[], int antal);
void konvertera_serie(double *matningar, int antal);

void skriv_flera_tabeller(int tal[], int antal);
void swap(double *a, double *b);
void fizzbuzz_sammanfattning(int fran, int till, char sammanfattning[]);


double *lagg_till_matning(double *logg, int *antal, double varde);
double *kopiera_matlogg(double *logg, int antal);
double *ta_bort_senaste_matning(double *logg, int *antal);
void frigor_matlogg(double *logg);
void skriv_matlogg(double *log, int antal);
void berakna_loggstatistik(double *logg, int antal, double *min_ut, 
    double *max_ut, double *medel_ut);

void spara_sensorregister(const char *filnamn,const Sensormatning sensorregister[],int antal);

#endif