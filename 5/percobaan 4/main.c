#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai;

    printf("input angka; ");
    scanf("%d", &nilai);

    if(nilai <= 40)
    {
        printf("E");
    }
    else if(nilai >40 && nilai <=55)
    {
        printf("D");
    }
    else if(nilai >55 && nilai <=60)
    {
        printf("C");
    }
    else if(nilai >60 && nilai <=80)
    {
        printf("B");
    }
    else if(nilai >80 && nilai <=100)
    {
        printf("A");
    }
    return 0;
}
