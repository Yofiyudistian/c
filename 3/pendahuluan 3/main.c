#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tiket, sisa, jumlah, diskon, harga = 50000;
    printf("beli 2 gratis 1\n");
    printf("input tiket: ");
    scanf("%d", &tiket);

    diskon = tiket / 3;
    sisa = tiket % 3;

    jumlah = (diskon*2*harga) + (sisa*harga);
    printf("total: %d", jumlah);
    return 0;
}
