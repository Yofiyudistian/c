#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, x2, x3;

    x = ( 2 + 3 ) - 10 * 2;
    x2 = ( 2 + 3 ) - ( 10 * 2 );
    x3 = 10 % 3 * 2 + 1;
    printf("hasil x: %d\n", x);
    printf("hasil x2: %d\n", x2);
    printf("hasil x3: %d\n", x3);
    return 0;
}
