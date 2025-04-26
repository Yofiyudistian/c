#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, hasil;
    printf("input angka: ");
    scanf("%d", &angka);

    hasil = 3*angka*angka - 5*angka + 6;
    printf("total: %d", hasil);
    return 0;
}
