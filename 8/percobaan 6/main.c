#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0, angka;

    printf("input angka: ");
    scanf("%d", &angka);

    printf("%d = ", angka);

    while(angka >0)
    {
        total += angka % 10;
        angka /= 10;\
    }

    printf("%d", total);
    return 0;
}
