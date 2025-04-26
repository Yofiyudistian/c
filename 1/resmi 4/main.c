#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka1, angka2, sum, avg, kuadrat;
    printf("input angka 1: ");
    scanf("%d", &angka1);

    printf("input angka 2: ");
    scanf("%d", &angka2);

    sum = angka1 + angka2;
    avg = sum / 2;
    kuadrat = pow(angka1, angka2);

    printf("hasil: %d\n", sum);
    printf("rata2: %d\n", avg);
    printf("kuadrat: %d\n", kuadrat);
    return 0;
}
