#include <stdio.h>

int q1(void) {
  int number_of_minutes;
  scanf("%d", &number_of_minutes);
  int hours = number_of_minutes / 60;
  int minutes = number_of_minutes % 60;
  printf("%d minutes is equivalent to %d hours and %d minutes.",
         number_of_minutes, hours, minutes);
  return 0;
}