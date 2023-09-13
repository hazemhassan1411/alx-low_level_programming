#include "dog.h"
#include <stdio.h>
/**
 * print_dog - it is a func
 * @d: it is avar
 * Return: return d
 */


void print_dog(struct dog *d)
{
		if (d)
		{
			printf("Name: %s\n", d->name ? d->name : "(nil)");
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
		}
}