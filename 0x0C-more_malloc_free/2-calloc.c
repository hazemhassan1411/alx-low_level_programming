#include "main.h"

/**
 * mm -a function help
 *@num: var1
 *@b: var3
 *@so: var2
 * Return: return no2
 **/

char *mm(char *so, char b, unsigned int num)
{
	char *pointer = so;

	while (num--)
		*so++ = b;
		return (pointer);
}


/**
 *_calloc-a function allocates memory for an array using malloc
 *@memb: var1
 *@size: var2
 * Return: return no2
 **/
void *_calloc(unsigned int memb, unsigned int size)
{
	void *mk;

	if (size == 0 || memb == 0)
		return (NULL);
		mk = malloc(memb * size);
	if (mk == NULL)
		return (NULL);
		mm(mk, 0, memb * size);
		return (mk);
}
