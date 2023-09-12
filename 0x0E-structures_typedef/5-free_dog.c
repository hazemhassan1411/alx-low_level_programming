#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - it is afunc
 * @d: it is a var
 * Return: return d
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
