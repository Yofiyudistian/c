#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idr, sisa1, hsl1, sisa2, hsl2, sisa3, hsl3;
    printf("input uang: ");
    scanf("%d", &idr);

    hsl1 = idr / 100000;
    sisa1 = idr % 100000;
    printf("%d lembar\n", hsl1);
    hsl2 = sisa1 / 50000;
    sisa2 = sisa1 % 50000;
    printf("%d lembar\n", hsl2);
    hsl3 = sisa2 / 20000;
    sisa3 = sisa2 % 20000;
    printf("%d lembar\n", hsl3);
    return 0;
}
