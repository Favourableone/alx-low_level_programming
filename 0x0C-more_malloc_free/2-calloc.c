#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *Return: A pointer to the allocated and initialized memory.
 * Returns NULL if nmemb or size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
char *char_ptr;
unsigned int i;
unsigned int total_size;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
{
exit(98);
}
char_ptr = (char *)ptr;
for (i = 0; i < total_size; i++)
{
char_ptr[i] = 0;
}
return (ptr);
}
