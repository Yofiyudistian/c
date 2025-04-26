#include <stdio.h>
#include <stdlib.h>

int main()
{
    int desimal;
    char huruf;
    printf("input angka desimal: ");
    scanf("%d", &desimal);
    printf("angka desimal: %d\n", desimal);

    printf("input huruf: ");
    scanf(" %c", &huruf);
    printf("huruf: %c", huruf);
    return 0;
}
