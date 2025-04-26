#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, r, t, opsi, hasil;

    printf("pilih menu\n");
    printf("1. volume kubus\n");
    printf("2. luas lingkaran\n");
    printf("3. volume silinder\n");
    printf("input pilihan: ");
    scanf("%d", &opsi);

    switch (opsi)
    {
    case 1:
        printf("panjnag sisi: ");
        scanf("%d", &s);
        hasil = s*s*s;
        printf("hasil: %d", hasil);
        break;
    case 2:
        printf("panjang jari2: ");
        scanf("%d", &r);
        hasil = 3.14*r*r;
        printf("hasil: %d", hasil);
        break;
    case 3:
        printf("panjnag jari2: ");
        scanf("%d", &r);
        printf("panjnag tinggi: ");
        scanf("%d", &t);
        hasil = 3.14*r*r*t;
        printf("hasil: %d", hasil);
        break;
    default:
        printf("salah");
        break;
    }
    return 0;
}
