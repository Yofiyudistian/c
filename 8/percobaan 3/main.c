#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, hitung = 1, total = 0, min=99, max=0, rata;
    char lagi = 'y';

    while(lagi == 'y')
    {
        printf("input angka ke %d: ", hitung);
        scanf("%d", &angka);

        total += angka;
        if(angka > max)
        {
            max = angka;
        }
        if(angka <min)
        {
            min = angka;
        }

        hitung++;

        printf("lagi: ");
        scanf(" %c", &lagi);
    }

    rata = total / hitung;

    printf("total: %d\n", total);
    printf("max: %d\n", max);
    printf("min: %d\n", min);
    printf("rata2: %d\n", rata);

    return 0;
}
