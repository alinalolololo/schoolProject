Nafisa - temperatur.c / 
lagg_till_matning / 
sensor_lagg_till.c
---
Valentin - geometri.c /
ta_bort_senaste_matning /
sensor_skriv.c
---
Anton - multiplikation.c + primtal.c/
skriv_matlogg + berakna_loggstatistik/ 
sensor_medelvarde.c + sensor_hitta.c
---
Oskar - fizzbuzz.c /
kopiera_matlogg /
sensor_spara.c 
---
Alina - kalkylator.c /
frigor_matlogg /
sensor_lasa.c 
---


/* git add verktyg.h
  git commit -m ”Lagg till gemensam header for verktygslada”
  git push
*\

gcc -Wall -Wextra -Wpedantic -std=c17 temperature.c geometri.c primtal.c multiplikation.c fizzbuzz.c kalkylator.c -o verktygslada .\main.c