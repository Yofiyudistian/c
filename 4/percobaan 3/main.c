#include <stdio.h>
#include <stdlib.h>

int main()
{
    int harga, total;

    printf("input harga: ");
    scanf("%d", &harga);

    if(harga >= 100000)
    {
        total = 0.05*harga;
        harga = harga - total;
    }
    else
    {
        total = harga;
    }

    printf("total: %d", harga);
    return 0;
}
