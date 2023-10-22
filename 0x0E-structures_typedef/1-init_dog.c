#include "dog.h"

/**
 * init_dog - it is func
 * @d: it is pointer
 * @name: it is a pointer
 * @age: it is n age
 * @owner: it is a pointer
 * Return: return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
