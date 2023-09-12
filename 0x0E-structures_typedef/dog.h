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

typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
