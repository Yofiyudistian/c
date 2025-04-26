#include <stdio.h>
#include <stdlib.h>

int main()
{
    int akademik, ketrampilan, psikologi, rata;

    printf("input akademik: ");
    scanf("%d", &akademik);
    printf("input ketrampilan: ");
    scanf("%d", &ketrampilan);
    printf("input psikologi: ");
    scanf("%d", &psikologi);

    rata = (akademik + ketrampilan + psikologi) / 3;

    if(rata <75)
    {
        printf("tidak lolos");
    }
    else
    {
        printf("lolos di ");
        if(ketrampilan > akademik && ketrampilan > psikologi)
        {
            printf("bagian produksi");
        }
        else if(akademik > ketrampilan && akademik > psikologi)
        {
            printf("bagian administrasi");
        }
        else if(psikologi > ketrampilan && psikologi > akademik)
        {
            printf("bagian pemasaran");
        }
    }


    return 0;
}
