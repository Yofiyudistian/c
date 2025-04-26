#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka1, angka2, operasi, hasil;

    printf("input bilangan: ");
    scanf("%d", &angka1);
    printf("input bilangan: ");
    scanf("%d", &angka2);

    printf("\nmenu matematika\n");
    printf("1. penjumlahan\n");
    printf("2. pengurangan\n");
    printf("3. pembagian\n");
    printf("4. perkalian\n");
    printf("input menu: ");
    scanf("%d", &operasi);

    if(operasi == 1)
    {
        hasil = angka1 + angka2;
        printf("hasil: %d", hasil);
    }
    else if(operasi == 2)
    {
        hasil = angka1 - angka2;
        printf("hasil: %d", hasil);
    }
    else if(operasi == 3)
    {
        if(angka2 != 0)
        {
            hasil = angka1 / angka2;
            printf("hasil: %d", hasil);\
        }
        else
        {
            printf("tidak bisa");
        }
    }
    else if(operasi == 4)
    {
        hasil = angka1 * angka2;
        printf("hasil: %d", hasil);
    }
    return 0;
}
