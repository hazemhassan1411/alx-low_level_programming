#include "main.h"
/**
 * print_most_numbers - print numbers
 *
 * Return: always 0
 */


void print_most_numbers(void)
{
	int number;

	for (number >= 0; number <= 9; number++)
	{

		if (number == 4 || number == 2)
			continue;
		_putchar(number + 48);
	}
		_putchar('\n');
}
