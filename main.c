#include "verktyg.h"
#include <stdio.h>

static void skriv_meny(void)
{
    printf("\n=== Gruppens verktygslada ===\n");
    printf("1. Temperaturkonvertering (Celsius -> Fahrenheit)\n");
    printf("2. Rektangelns area\n");
    printf("3. Multiplikationstabell\n");
    printf("4. Kontrollera om ett tal ar ett primtal\n");
    printf("5. FizzBuzz for ett intervall\n");
    printf("6. Enkel rakning (+, -, *, /)\n");
    printf("7. Konvertera en serie av Celsius-varden till Fahrenheit\n");
    printf("9. Flera multiplikationstabeller\n");
    printf("11. FizzBuzz sammanfattning");
    printf("12. Byt plats pa tva tal\n");
    printf("0. Avsluta\n");
    printf("Val: ");
}

int main(void) {
  int val;

  do {
    skriv_meny();
    scanf("%d", &val);

    switch (val) {
    case 1: {
      double celsius;
      printf("Ange temperatur i Celsius: ");
      scanf("%lf", &celsius);
      printf("%.2f C = %.2f F\n", celsius, celsius_till_fahrenheit(celsius));
      break;
    }

    case 2: {
      double bredd, hojd;
      printf("Ange bredd och hojd: ");
      scanf("%lf %lf", &bredd, &hojd);
      printf("Arean ar %.2f\n", rektangelarea(bredd, hojd));
      break;
    }

    case 3: {
      int tal;
      printf("Ange ett tal: ");
      scanf("%d", &tal);
      skriv_multiplikationstabell(tal);
      break;
    }

    case 4: {
      int tal;
      printf("Ange ett heltal: ");
      scanf("%d", &tal);

      if (ar_primtal(tal)) {
        printf("%d ar ett primtal.\n", tal);
      } else {
        printf("%d ar inte ett primtal.\n", tal);
      }
      break;
    }

    case 5: {
      int fran, till;
      printf("Ange start och slut (t.ex. 1 20): ");
      scanf("%d %d", &fran, &till);
      skriv_fizzbuzz(fran, till);
      break;
    }

    case 6: {
      double a, b;
      char operatortecken;
      printf("Ange uttryck, t.ex. \"4 + 2\": ");
      scanf("%lf %c %lf", &a, &operatortecken, &b);
      printf("Resultat: %.2f\n", berakna(a, b, operatortecken));

      // swap(&a, &b);
      // printf("Changed values will be %lf %lf ", a, b);
      // break;
    }

    case 9: {
        int tal[20];
        int antal;

        printf("Hur manga tabeller vill du skriva ut (max 20)? ");
        scanf("%d", &antal);

        for (int i = 0; i < antal; i++) {
            printf("Tal %d: ", i + 1);
            scanf("%d", &tal[i]);
        }

        skriv_flera_tabeller(tal, antal);
        break;
    }
    case 11: {
      int fran, till;
      char sammanfattning[100];

      printf("Ange start och slut (t.ex. 1 20): ");
      scanf("%d %d", &fran, &till);

      fizzbuzz_sammanfattning(fran, till, sammanfattning);
      printf("%s\n", sammanfattning);
      break;
    }
    case 12: {
      double a, b;

      printf("Ange tva tal, t.ex. \"3 7\": ");
      scanf("%lf %lf", &a, &b);

      printf("Fore : a = %.2f, b = %.2f\n", a, b);
      swap(&a, &b);
      printf("Efter : a = %.2f, b = %.2f\n", a, b);
      break;
    }
    case 7: {
      double matningar[20];
      int antal;
      printf("Hur manga matningar vill du mata in (max 20)? ");
      scanf("%d", &antal);
        for (int i = 0; i < antal; i++) {
          printf("Matning %d (Celsius): ", i + 1);
          scanf("%lf", &matningar[i]);
        }

      konvertera_serie(matningar, antal);


      printf("I Fahrenheit: ");
        for (int i = 0; i < antal; i++) {
            printf("%.2f ", matningar[i]);
          }
      printf("\n");
      break;
      }

    case 0:{
              
      printf("Avslutar.\n");
      break;
    }
    
    default:{
      printf("Ogiltigt val, forsok igen.\n");
    }
  }
} while (val != 0);
  return 0;
}