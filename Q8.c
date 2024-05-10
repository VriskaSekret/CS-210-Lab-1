#include <stdio.h>

int q8(void) {

  int cin, a, b, cout, sum;

  scanf("%d %d %d", &cin, &a, &b);

  cout = ((a & cin) | (b & cin)) | (a & b);
  sum = ((a ^ b) ^ (cin));

  printf("cout = %d\n", cout);
  printf("sum = %d\n", sum);

  return 0;
}