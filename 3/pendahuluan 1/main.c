#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;

    printf("input suhu(celcius): ");
    scanf("%f", &c);

    f= c*1.8+32;
    printf("suhu dalam fahrenheit: %f", f);
    return 0;
}
