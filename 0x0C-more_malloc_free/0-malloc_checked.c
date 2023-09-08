#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *Return: A pointer to the allocated memory.
 * Exits with status value 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
/**
 * main - Example usage of malloc_checked.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    char *str = (char *)malloc_checked(10 * sizeof(char));

    if (str != NULL)
    {
        printf("Allocated memory successfully!\n");
        free(str);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return (0);
}
