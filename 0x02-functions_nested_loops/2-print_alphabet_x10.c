#include "main.h"
/**
 * print_alphabet_x10 - utillize on the _putchar functhin to print alpabet 10
 */

void print_alphabet_x10(void)
{

	int ch, line;

	for (line = 0; line <= 9; line++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	}
}
