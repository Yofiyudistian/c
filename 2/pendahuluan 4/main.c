#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, diskriminan;

    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);
    printf("input b: ");
    scanf("%d", &c);

    diskriminan = (b*b) - (4*a*c);
    printf("diskriminan: %d\n", diskriminan);
    return 0;
}
