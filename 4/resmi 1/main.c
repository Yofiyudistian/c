#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, absolut;
    printf("input angka: ");
    scanf("%d", &angka);

    if(angka>=0)
    {
        absolut = angka;
    }
    else
    {
        absolut = angka * -1;
    }

    printf("hasilnya: %d", absolut);
    return 0;
}
