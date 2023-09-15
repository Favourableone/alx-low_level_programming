#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer
 * @name: The name to print
 * @f: A function pointer to print the name
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
