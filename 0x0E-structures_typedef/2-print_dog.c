#include "dog.h"
#include <stdio.h>
/**
 * init_dog - it is a func
 * @d: it is avar
 * @name: it is a var
 * @age: it is avar
 * @owner: it is a var
 * Return: return d
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d)
		{
			printf("Name: %s\n", d->name ? d->name : "(nail)");
			printf("Owner: %s\n", d->owner ? d->owner : "(nail)");
			printf("Age: %f\n", d->age);
		}
}
