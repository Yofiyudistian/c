#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;

    printf("input angka suhu: ");
    scanf("%d", &angka);

    if(angka<0)
    {
        printf("padat");
    }
        if(angka >=0 && angka <=100)
        {
            printf("cair");
        }
            if(angka>100)
            {
                printf("gas");
            }

    return 0;
}
