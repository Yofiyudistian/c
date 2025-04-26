#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, i, hasil=0;

    printf("input angka: ");
    scanf("%d", &angka);

    for(i=angka ; i>0 ; i--)
    {
        printf("%d ", i);
        hasil += i;

        if(i!=1)
        {
            printf(" + ");
        }
    }

    printf(" = %d", hasil);
    return 0;
}
