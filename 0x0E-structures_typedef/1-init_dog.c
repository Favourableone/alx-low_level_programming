#include <stdlib.h>
#include "dog.h"

/**
 * intit_dog - initializes a variable of type struct dog
 * @param d Pointer to dog structure
 * @param name Name of the dog 
 * @param age Age of the dog
 * @param owner Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
