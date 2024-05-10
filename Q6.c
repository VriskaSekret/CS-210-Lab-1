#include <stdio.h>
#include <stdlib.h>

int q6(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: %s height weight\n", argv[0]);

  } else {
    float height = atof(argv[1]);
    float weight = atof(argv[2]);

    float bmi = weight / (height * height);

    printf("height = %f, weight = %f, bmi = %f, category = ", height, weight,
           bmi);

    if (bmi < 18) {
      printf("underweight\n");
    } else if (bmi >= 18 && bmi < 25) {
      printf("normal weight\n");
    } else if (bmi >= 25 && bmi < 30) {
      printf("overweight\n");
    } else {
      printf("obese\n");
    }
  }
  return 0;
}