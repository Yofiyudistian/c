#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, jam, totjam = 0, nilaii, totnilai = 0;
    int ip=0;
    char nilai;

   for(i=0 ; i<5 ; i++)
   {
       printf("input nilai: ");
       scanf(" %c", &nilai);
       printf("input jam: ");
       scanf("%d", &jam);

       if(nilai == 'A')
    {
        nilaii = 4;
    }
    else if(nilai == 'B')
    {
        nilaii = 3;
    }
    else if(nilai == 'C')
    {
        nilaii = 2;
    }
    else if(nilai == 'D')
    {
        nilaii = 1;
    }
    else if(nilai == 'E')
    {
        nilaii = 0;
    }

    totnilai += nilaii*jam;
    totjam += jam;
   }

    ip = totnilai / totjam;
    printf("%d", ip);
    return 0;
}
