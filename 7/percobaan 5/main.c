#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, i, prima=1;

    printf("input angka: ");
    scanf("%d", &angka);

    if(angka <= 1)
    {
        prima = 0;
        printf("bukan prima");
    }
    for(i= 2 ; i<=angka/2 ; i++)
    {
        if(angka%i ==0)
        {
            prima = 0;
            break;
        }
        else
        {
            prima =1;
        }
    }

    if(prima == 1)
    {
        printf("prima");
    }
    else
    {
        printf("bukan prima");
    }
    return 0;
}
