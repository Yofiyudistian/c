#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;

    while(input != 'X')
    {
        printf("input huruf: ");
        scanf(" %c", &input);
        printf("hurufnya: %c\n", input);
    }
    return 0;
}
