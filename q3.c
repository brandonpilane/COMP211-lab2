// Write a program that takes two numbers and an operator (+, -, *, /) as input
// and uses a switch statement to perform the appropriate operation.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_error(void);

int main(int argc, char** argv) {
  float a;
  float b;
  float result;

  if (argc != 4) {
    print_error();
    return EXIT_FAILURE;
  } else {
    a = strtof(argv[1], NULL);
    b = strtof(argv[3], NULL);
    const char* operation = argv[2];

    if (!strcmp("/", operation)) {
      result = a / b;
    } else if (!strcmp("*", operation)) {
      result = a * b;
    } else if (!strcmp("+", operation)) {
      result = a + b;
    } else if (!strcmp("-", operation)) {
      result = a - b;
    } else {
      print_error();
    }

    printf("%f %s %f = %f\n", a, operation, b, result);
  }

  return EXIT_SUCCESS;
}

void print_error(void) {
  printf("Expected: \033[95m./q3.c [number] [operator] [number]\033[0m\n");
  printf("\nOperators:\n");
  printf(
      "\t+\tReturns the sum of 2 numbers (a + b).\n\t-\tReturns the difference "
      "between two numbers (a - b)\n\t*\tReturns the product of two numbers (a "
      "* "
      "b)\n\t/\tReturns the quotient of two numbers (a / b)\n");
  printf(
      "\nNumber: \n\ta floating point number (e.g. 5.2, 78.235, 123.32, "
      "6.0)\n");
}