#include <stdio.h>
#include <string.h>

int q3(void) {

  char str1[40];
  char str2[40];

  scanf("%s\n", str1);
  scanf("%s", str2);

  int len1 = strlen(str1);
  int len2 = strlen(str2);

  printf("The length of str1 is: %d\n", len1);
  printf("The length of str2 is: %d\n", len2);

  strcat(str1, str2);
  printf("%s\n", str1);

  len1 = strlen(str1);
  len2 = strlen(str2);

  printf("The length of str1 is: %d\n", len1);
  printf("The length of str2 is: %d\n", len2);

  return 0;
}