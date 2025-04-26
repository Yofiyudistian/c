#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total=0, haji, tabungan, inflasi, i=0, bonus;

    printf("input biaya: ");
    scanf("%d", &haji);
    printf("input tabugan: ");
    scanf("%d", &tabungan);
    printf("input inflasi harga: ");
    scanf("%d", &inflasi);
    printf("input bonus: ");
    scanf("%d", &bonus);

    total = haji;
    while(total > 0)
    {
        i++;

        total = total-tabungan;
        if(i/6 == 0)
        {
            tabungan += bonus;
        }
        if(i/12 == 0)
        {
            total = haji + (haji*inflasi/100);

        }
    }

    printf("jmlh bulan: %d", i);
    return 0;
}
