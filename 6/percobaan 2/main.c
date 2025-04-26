#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valid = 1;
    char opr;
    float angka1, angka2, result;

    printf("input 2 bilangan dan 1 operator: ");
    scanf("%f %f %c", &angka1, &angka2, &opr);

    switch (opr)
    {
    case '*':
        result = angka1 * angka2;
        break;
    case '/':
        result = angka1 / angka2;
        break;
    case '-':
        result = angka1 - angka2;
        break;
    case '+':
        result = angka1 + angka2;
        break;
    default:
        printf("salah");
        valid = 0;
        break;
    }

    if(valid == 1)
    {
        printf("\n%f %c %f = %f", angka1, opr, angka2, result);
    }
    else
    {
        printf("operator salah");
    }
    /*switch (valid)
    {
        case 1:
            printf("\n %f %c %f = %f", angka1, opr, angka2, result);
            break;
        case 0:
            printf("operator salah");
            break;
        default:
            printf("salah");
            break;
    }*/
    return 0;
}
