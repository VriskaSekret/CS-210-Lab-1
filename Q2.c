#include <stdio.h>

int q2(void)
{
    int numberthing;
    char letterthing;
    scanf("%d\n", &numberthing);
    scanf("%c", &letterthing);
    printf("%c%d%c", letterthing, numberthing, letterthing);

    return 0;
}