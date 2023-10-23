#include "main.h"

/**
 *_realloc-a function that reallocates a memory block using malloc and free___
 *@ptr: var 1_____
 *@old_size: var 2 _____
 * @new_size: var 3 ______
 * Return: return no_2 ____
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *mk;
unsigned int ip;

if (new_size ==  old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
mk = malloc(new_size);
if (mk == NULL)
return (NULL);
return (mk);
}

if (new_size > old_size)
{
mk = malloc(new_size);
if (mk == NULL)
return (NULL);
for (ip = 0; ip < old_size && ip < new_size; ip++)
*((char *)mk + ip) = *((char *)ptr + ip);
free(ptr);
}
return (mk);
}
