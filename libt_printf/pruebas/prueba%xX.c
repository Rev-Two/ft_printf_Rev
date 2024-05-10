#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	int mayus = 42;
	int minus = 42;
        printf("return %i\n", ft_printf("En mayuscula: %X\n", mayus));
        printf("\n----------------\n");
        printf("return: %i\n", printf("En mayuscula: %X\n", mayus));

	printf("\n____________\n");

        printf("return: %i\n", ft_printf("En minuscula: %x\n", minus));
        printf("\n----------------\n");
        printf("return: %i\n", printf("En minuscula: %x\n",minus));
        return 0;
}


