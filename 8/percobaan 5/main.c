#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jumlah = 0, spasi = 0;
    char kalimat;

    printf("input kalimat: ");
    while((kalimat = getchar()) != '\n')
    {
        jumlah++;
        if(kalimat == ' ')
        {
            spasi++;s
        }

    }
    printf("jmlh huruf: %d\n", jumlah);
    printf("jmlh spasi: %d\n", spasi);
    return 0;
}
