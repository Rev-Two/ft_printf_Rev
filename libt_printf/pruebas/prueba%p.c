#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	int *ptr = "2hola";
//	int numero = "";
//	ptr = &numero;

        ft_printf("El puntero apunta a: %p\n", ptr);
        printf("\n----------------\n");
        printf("return %i\n", printf("El puntero apunta a: %p\n",ptr));
        return 0;
}


