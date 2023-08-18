#include "main.h"
/**
 * print_alphabet - utillize on the _putchar functhin to print alpabet
 * to a-z
 */

void print_alphabet(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
