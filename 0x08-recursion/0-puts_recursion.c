#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Prints a string followed by a new line;
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
/* check for end of string */
if (*s == '\0') 
{
/* print new line when end reached */
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s+1);
}
