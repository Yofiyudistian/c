#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angka1, angka2, hasil;

    printf("input angka 1: ");
    scanf("%f", &angka1);
    printf("input angka 2: ");
    scanf("%f", &angka2);

    if(angka2 == 0)
    {
        printf("gak bisa dibagi");
    }
    else
    {
        hasil = angka1 / angka2;
        printf("hasil: %.3f", hasil);
    }
    return 0;
}
