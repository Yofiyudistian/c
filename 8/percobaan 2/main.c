#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, total=0;
    char lagi;

    while(lagi != 't')
    {
        printf("input angka: ");
        scanf("%d", &angka);
        total += angka;
        printf("lagi: ");
        scanf(" %c", &lagi);
    }

    printf("%d", total);
    return 0;
}

