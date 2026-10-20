#include <stdio.h>

int ar_primtal(int tal) {
    int number;
    int is_prime = 1;

    printf("Ange ett positivt heltal: ");
    scanf("%d", &number);

    if (number < 2) {
        is_prime = 0;
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d är ett primtal.\n", number);
    } else {
        printf("%d är inte ett primtal.\n", number);
    }

    return 0;
}


int raknar_primtal_i_array(int tal[], int antal)
{
    int raknare = 0;
    int tal[] = {2, 4, 7, 9, 11};
    int antal = 5;


    for (int i = 0; i < antal; i++)
    {
        if (ar_primtal(tal[i]))
        {
            raknare++;
        }
    }

    return raknare;
}






