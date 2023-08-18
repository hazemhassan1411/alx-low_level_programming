#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: always 0
 *
 */


void more_numbers(void)
{
	int a, b, c;

	for (b = 1; b <= 10; b++)
	{
		for (c = 1; c <= 10; c++)
		{
			num = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				a = c % 10;
			}
			_putchar(a + 48);
		}
		_putchar('\n')
	}
}
