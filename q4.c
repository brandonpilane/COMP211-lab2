// Write a program that inputs age and checks using an if statement if the
// person is eligible to vote (age ≥ 18).

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  if (age < 18 && age > 0) {
    printf("\nYou are not eligible to vote at %d\n", age);
  } else if (age >= 18) {
    printf("\nYou can vote!\n");
  } else {
    printf("\nHuh?\n");
  }

  return EXIT_SUCCESS;
}