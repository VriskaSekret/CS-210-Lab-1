#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int q7(void) {

  char filename[10];
  scanf("%s", filename);
  FILE *file;
  file = fopen(filename, "r");
  char name[20];
  int age;
  while (fscanf(file, "%s %d", name, &age) != EOF) {
    printf("%s %d\n", name, age);
  }
  fclose(file);
  return 0;
}