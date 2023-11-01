#include "main.h"
#include<stdio.h>
	/**
	 * main - Entry point
	 *
	 * Return: Always 0 (Success)
	 */
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
}
