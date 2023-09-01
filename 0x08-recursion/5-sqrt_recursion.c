#include "main.h"
#include <stdio.h>
/**
 * _sqrt_a - Calculates natural square root
 * @n: number to calculate the square root
 * @i: iterate number 
 * Return: the natural square root
 */
int _sqrt_a(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
return (_sqrt_a(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
return (_sqrt_a(n, 0));
}
