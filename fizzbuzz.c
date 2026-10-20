#include <stdio.h>
#include "verktyg.h"

void skriv_fizzbuzz(int fran, int till)
{
    for (int i = fran; i <= till; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
}

void fizzbuzz_sammanfattning(int fran, int till, char sammanfattning[])
{
    int antal_fizz = 0;
    int antal_buzz = 0;
    int antal_fizzbuzz = 0;

    for (int i = fran; i <= till; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            antal_fizzbuzz++;
        }
        else if (i % 3 == 0) 
        {
            antal_fizz++;
        }
        else if (i % 5 == 0)
        {
            antal_buzz++;
        }
    }

    sprintf(sammanfattning, "Fizz: %d, Buzz: %d, FizzBuzz: %d",
            antal_fizz, antal_buzz, antal_fizzbuzz);
}