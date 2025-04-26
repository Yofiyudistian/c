#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12, b = 2, c = 3, d = 4;
    printf("hasil: %d\n", a % b);
    printf("hasil: %d\n", a - c);
    printf("hasil: %d\n", a + b);
    printf("hasil: %d\n", a / d);
    printf("hasil: %d\n", a / d * d + a % d);
    printf("hasil: %d\n", a % d / d * a - c);

    return 0;
}
