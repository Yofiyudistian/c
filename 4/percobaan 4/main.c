#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka1, angka2;

    printf("input angka 1: ");
    scanf("%d", &angka1);
    printf("input angka 2: ");
    scanf("%d", &angka2);

    if(angka1 % angka2 == 0)
    {
        printf("kelipatan");
    }
    else
    {
        printf("tidak kelipatan");
    }
    return 0;
}
