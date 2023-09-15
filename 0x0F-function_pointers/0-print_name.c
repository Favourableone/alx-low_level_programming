#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer
 * @name: The name to print 
 * @f: A function pointer to print the name
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
/**
 * print_function - Prints a name 
 * @name: The name to print
*/
void print_function(char *name)
{
printf("Hello, my name is %s.\n", name); 
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char *name = "Favour";
print_name(name, print_function);
return (0);
}
