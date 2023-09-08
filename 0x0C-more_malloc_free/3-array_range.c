#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *Return: pointer to new array, NULL on failure
 */
int *array_range(int min, int max)
{
int *arr;
int size;
int i;

if (min > max)
{
return NULL;
}
size = max - min + 1;
arr = (int *)malloc(size * sizeof(int));
if (arr == NULL)
{
exit(98);
}
for (i = 0; i < size; i++){
arr[i] = min + i;
}
return (arr);
}
