#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializer for dog structure
 * @d: Pointer to dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d == NULL)
return;
(*d).name = name;
d->age = age;
d->owner = owner;
}
