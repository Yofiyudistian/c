#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;

    printf("input angka 1-7: ");
    scanf("%d", &angka);

    switch (angka){
        case 1:
            printf("senin");
            break;
        case 2:
            printf("selasa");
            break;
        case 3:
            printf("rabu");
            break;
        case 4:
            printf("kamis");
            break;
        case 5:
            printf("jumat");
            break;
        case 6:
            printf("sabtu");
            break;
        case 7:
            printf("minggu");
            break;
        default:
            printf("tidak valid");
            break;
    }
    return 0;
}
