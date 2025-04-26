#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, n=0, i, print = 0 ;

    printf("input angka: ");
    scanf("%d", &angka);

    for(i=1 ; i<=angka ; i++)
    {
        printf("%d ", print);
        print += i;
    }
    return 0;
}
