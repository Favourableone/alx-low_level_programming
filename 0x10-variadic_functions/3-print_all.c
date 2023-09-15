#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *str;
	
	va_start(args, format);
	
	while (format[i])
	{
		j = 0;
		while (format[i] != 'c' &&
		       format[i] != 'i' &&
		       format[i] != 'f' &&
		       format[i] != 's')
			i++;
		
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				j++;
				break;				
		}
		
		if (format[i + 1] && j < 2)
			printf(", ");
			
		i++;
	}
	
	printf("\n");

	va_end(args);
}
