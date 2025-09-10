// Create a program that repeatedly displays a menu (1. Add numbers, 2. Find
// average, 3.Exit). Use a while loop + switch to process the user’s choice
// until they choose to exit

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input = 0;

  printf("Choose an option by entering the number.\n");
  printf("1. Add numbers\n");
  printf("2. Find average\n");
  printf("3. Exit\n");

get_input:
  scanf("%d", &input);

  switch (input) {
    case 1:
      printf("\033[2J\033[H");  // Clear screen and move cursor to top-left
      printf("You chose option 1: Add numbers\n");  // Can replace with actual
                                                    // logic
      break;

    case 2:
      printf("\033[2J\033[H");  // Clear screen and move cursor to top-left
      printf("You chose option 2: Find average\n");  // can replace with actual
                                                     // stuff as well
      break;

    case 3:
      printf("\033[2J\033[H");  // Clear screen and move cursor to top-left
      printf("Exiting the program!\n");
      break;

    default:
      goto get_input;
  }

  return EXIT_SUCCESS;
}