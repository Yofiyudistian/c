#include <stdio.h>
#include <stdlib.h>

int main()
{
    float usd, idr;
    printf("input uang (USD): ");
    scanf("%f", &usd);

    idr = usd * 11.090;
    printf("uang rupiah anda: %f", idr);
    return 0;
}
