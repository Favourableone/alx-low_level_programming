#include "main.h"
/**
 * checkLowercase - Checks if a character is lowercase.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
