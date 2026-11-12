# Verktygslådan

| Medlem   | Uppgift 3                                 | Klar? |
|----------|-------------------------------------------|-------|
| Nafisa   | `matlogg_lagg_till.c` (meny 13)           | ⬜    |
| Valentin | meny 14 + `geometri.c`                    | ✅    |
| Anton    | `matlogg_skriv.c` + `matlogg_statistik.c` | ✅    |
| Oskar    | `matlogg_kopiera.c`                       | ✅    |
| Alina    | `matlogg_frigor.c`                        | ✅    |

| Medlem   | Uppgift 4                                 | Klar? |
|----------|-------------------------------------------|-------|
| Nafisa   | `sensor_lagg_till.c`                      | ⬜    |
| Anton    | `sensor_medelvarde.c` + `sensor_hitta.c`  | ⬜    |
| Oskar    | `sensor_spara.c`                          | ✅    |
| Alina    | `sensor_lasa.c`  +`sensor_skriv.c`        | ⬜    |

| Medlem   | Uppgift 5                                 | Klar? |
|----------|-------------------------------------------|-------|
| Nafisa   |                      | ⬜    |
| Anton    |   | ⬜    |
| Oskar    |                           | ⬜    |
| Alina    |         | ⬜    |

## Uppdrag

- [x] 1
- [x] 2
- [x] 3
- [ ] 4
- [ ] 5
- [ ] 6
- [ ] 7
- [ ] 8
- [ ] 9
- [ ] 10

## Bygga och kör

```bash
gcc -Wall -Wextra -Wpedantic -std=c17 \
    main.c temperature.c geometri.c multiplikation.c primtal.c \
    fizzbuzz.c kalkylator.c matlogg_skriv.c matlogg_statistik.c \
    matlogg_kopiera.c matlogg_ta_bort.c matlogg_lagg_till.c \
    -o verktygslada
```