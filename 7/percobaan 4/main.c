#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, i;

    printf("input angka: ");
    scanf("%d", &angka);

    for(i = 0 ; i<=angka ; i++)
    {
        if(i%2 == 0)
        {
            printf(" -%d", i);
        }
        else
        {
            printf(" %d", i);
        }
    }
    return 0;
}
