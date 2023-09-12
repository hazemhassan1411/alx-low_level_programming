#ifndef DOG_H
#define DOG_H
/**
 * struct dog - it is struct
 * @name: it is name
 * @owner: it is owner
 * @age: it is age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
