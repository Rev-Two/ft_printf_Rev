#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int numero = LONG_MAX;
	printf("return %i\n", ft_printf("Debe salir numero: %d\n", numero));
	printf("\n----------------\n");
	printf("return %i\n", printf("Debe salir numero: %d\n", numero));
	return 0;
}
