#ifndef DOG_H
#define DOG_H

/**
 * struct dog - it is struct
 * @name: pointer to the name
 * @owner: it is pointer to owner
 * @age: it is the age
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
