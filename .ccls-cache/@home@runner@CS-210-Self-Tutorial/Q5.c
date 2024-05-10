#include <stdio.h>

int q5(void) {

  int n;
  int counter; // counter for while loop
  scanf("%d", &n);
  counter = n;

  while (n > 1) {
    n--;
    counter = counter * n;
  }

  printf("The result is %d", counter);

  return 0;
}