#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Calculates natural square root of n
 * @n: The number to calculate square root for
 *
 * Return: Natural square root of n, or -1 if none exists
*/
int _sqrt_recursion(int n)
{
int root;
if (n < 0)
{
return (-1);
}
root = 1; /*Start with small root value and incrementally increase*/
while (root *root <= n)
{
root++;
}
if (root *root > n)
{
root--; /*Correct if overshot*/
}
return (root);
}
