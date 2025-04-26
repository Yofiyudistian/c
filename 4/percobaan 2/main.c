#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;

    printf("input angka: ");
    scanf("%d", &angka);

    if(angka%2 == 0)
    {
        printf("genap");
    }
    else
    {
        printf("ganjil");
    }
    return 0;
}
