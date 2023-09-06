#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
while(*haystack != '\0')
{
const char *h = haystack;
const char *n = needle;

while (*h != '\0' && *n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return ((char *)haystack);
haystack++;
}
return (void *)0;
}
