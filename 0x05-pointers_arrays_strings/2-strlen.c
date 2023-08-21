#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a parmeter
 *
 * Return: return var
 */

int _strlen(char *s)
{

	int var;

	for (var = 0; *s != '\0'; s++)
		var++;


		return (var);
}
