#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int sum = 0;
unsigned int i;

va_start(ap, n);
for(i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
