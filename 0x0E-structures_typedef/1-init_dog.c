#include "dog.h"

/**
 * @brief Initialize a dog structure 
 *
 * @param d Pointer to dog structure
 * @param name Name of the dog 
 * @param age Age of the dog
 * @param owner Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
