// Question: Write a program that asks the user to enter a number and uses an
// if–else statement to check if it is even or odd.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a number: ");
  int num;
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("%d is even\n", num);
  } else {
    printf("%d is odd\n", num);
  }

  return EXIT_SUCCESS;
}