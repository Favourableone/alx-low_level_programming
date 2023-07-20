#include "main.h"

/**
 * add - Adds two integers and returns the result
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of the two integers
 */
int add(int, int)
{
    int num1 = 5;
    int num2 = 7;
    int result = add_integers(num1, num2);

    _putchar('The sum of ');
    _putchar((num1 + '0'));
    _putchar(' and ');
    _putchar((num2 + '0'));
    _putchar(' is ');
    _putchar((result + '0'));
    _putchar('\n');

    return 0;
}
