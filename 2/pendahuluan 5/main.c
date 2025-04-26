#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, diskriminan;

    printf("input a: ");
    scanf("%f", &a);
    printf("input b: ");
    scanf("%f", &b);
    printf("input b: ");
    scanf("%f", &c);

    diskriminan = (b*b) - (4*a*c);
    printf("diskriminan: %.2f\n", diskriminan);
    return 0;
}
