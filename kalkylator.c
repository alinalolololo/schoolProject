#include "verktyg.h"
#include <stdio.h>


/* printf("Sum: %.2f\n", first + second);
 printf("Difference: %.2f\n", first - second);
 printf("Product: %.2f\n", first * second);
 printf("Quotient: %.2f\n", first / second); */

double berakna(double a, double b, char operatortecken) {
  double result;

  // printf("First number: ");
  // scanf("%lf", &a);

  // printf("Operator ( +, - , * , / ): ");
  // scanf(" %c", &operatortecken);

  // printf("Second number: ");
  // scanf("%lf", &b);

  switch (operatortecken) {
  case '+':
    result = a + b;
    break;

  case '-':
    result = a - b;
    break;

  case '*':
    result = a * b;
    break;

  case '/':
    if (b != 0) {
      result = a / b;
    } else {
      printf("Error: Division by zero is not allowed.\n");
    }
    break;

  default:
    printf("Error: '%c' is not a valid math operator.\n", operatortecken);
  }

  return result;
}

void swap(double *a, double *b) {
  double temp = *b;
  *b = *a;
  *a = temp;
}
