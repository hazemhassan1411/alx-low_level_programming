#include "main.h"
/**
 * mm -a function help ___
 *@num: var 1_____
 *@b: var 3 ____
 *@so: var 2 _____
 * Return: return no_2 ____
 **/

char *mm(char *so, char b, unsigned int num)
{
	char *pointer = so;

	while (num--)
	{
		*so++ = b;
	}
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
	{
		return (NULL);
	}
		mk = malloc(memb * size);
	if (mk == NULL)
	{
		return (NULL);
	}
		mm(mk, 0, memb * size);
		return (mk);
}
