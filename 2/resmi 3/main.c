#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, y2, b, x, cc, z, a;

    printf("isi b: ");
    scanf("%d", &b);
    printf("isi x: ");
    scanf("%d", &x);
    printf("isi c: ");
    scanf("%d", &cc);
    printf("isi z: ");
    scanf("%d", &z);
    printf("isi a: ");
    scanf("%d", &a);

    y = b*(x*x)+0.5*x-cc;
    y2 = 0.3*x*z/2*a;

    printf("y: %d\n", y);
    printf("y2: %d\n", y2);
    return 0;
}
