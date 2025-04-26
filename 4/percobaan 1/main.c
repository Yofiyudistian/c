#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;

    printf("input angka: ");
    scanf("%d", &angka);

    if(angka>=0)
    {
        printf("nilai a adalah positif");
    }
    else
    {
        printf("nilai a adalah negatif");
    }
    return 0;
}
