#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
* Creates an array of characters of given size and initializes
* each element with the given character.
* size - Number of elements to allocate
* c - Character to initialize each element to  
*Returns:Pointer to allocated array on success, NULL on failure
*/
char *create(unsigned int size, char c)
{
char *arr;
if (size == 0)
{return (NULL);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{return (NULL);
}
unsigned int i;
for (i = 0; i < size; i++)
{arr[i] = c;
}
return (arr);
}
