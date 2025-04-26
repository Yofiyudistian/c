#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jumlah = 0, spasi = 0, kecil = 0, besar = 0, angka = 0;
    char kalimat;

    printf("input kalimat: ");
    while((kalimat = getchar()) != '\n')
    {
        jumlah++;
        if(kalimat == ' ')
        {
            spasi++;
        }
        else if(kalimat >= 'a' && kalimat <= 'z')
        {
            kecil++;
        }
        else if(kalimat >= 'A' && kalimat <= 'Z')
        {
            besar++;
        }
        else if(kalimat >= '0' && kalimat <= '9')
        {
            angka++;
        }

    }
    printf("jmlh karakter: %d\n", jumlah);
    printf("jmlh spasi: %d\n", spasi);
    printf("jmlh kecil: %d\n", kecil);
    printf("jmlh besar: %d\n", besar);
    printf("jmlh angka: %d\n", angka);
    return 0;
}
