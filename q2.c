// Develop a program that reads a student's marks and uses nested if statements
// to display: `Distinciton` if marks >= 75,`pass` if 50 <= marks <= 75 & `fail`
// if marks < 50

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(void) {
  float marks;

  printf("Enter your marks: ");
  scanf("%f", &marks);

  char* grade[12];

  if (marks > 100 || marks < 0) {
    printf("Invalid marks!\n");
  } else if (marks >= 75) {
    printf("Marks: %.2f\t Grade: Distinction\n", marks);
  } else if (marks >= 50) {
    printf("Marks: %.2f\t Grade: Pass\n", marks);
  } else {
    printf("Marks: %.2f\t Grade: Fail\n", marks);
  }

  return EXIT_SUCCESS;
}