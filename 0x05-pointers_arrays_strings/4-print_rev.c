#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: parameter
 */

void print_rev(char *s)
{
	int p = 0;

	while (s[p])
	p++;

	while (p--)
{

		putchar(s[p]);
}
	putchar('\n');

}

