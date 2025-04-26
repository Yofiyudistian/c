#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hari;

    printf("input angka 1-7: ");
    scanf("%d", &hari);

    switch (hari){
    case 1:
        printf("minggu");
        break;
    case 2:
        printf("senin");
        break;
    case 3:
        printf("selasa");
        break;
    case 4:
        printf("rabu");
        break;
    case 5:
        printf("kamis");
        break;
    case 6:
        printf("jumat");
        break;
    case 7:
        printf("sabtu");
        break;
    default:
        printf("tidak valid");
        break;
    }
    return 0;
}
