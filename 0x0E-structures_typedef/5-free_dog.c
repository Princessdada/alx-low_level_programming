#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - free memory of dog
* @d: pointer to dog
*/

void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->owner);
free(d->name);
free(d);
}
