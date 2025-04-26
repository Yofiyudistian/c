#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, i, hasil=1;

    printf("input angka: ");
    scanf("%d", &angka);

    for(i=1 ; i<angka ; i++)
    {
        printf("%d\t", i);
        i++;
    }
    return 0;
}
