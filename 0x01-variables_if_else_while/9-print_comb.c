#include <stdio.h>

/**
 * main - write alphabet
 * Descripthion:  prints all possible combinations of single-digit numbers.
 * Return: always 0
*/

int main(void)
{

	int number = 0;

	while (number <= 9)
	{
	putchar(number + 48);

	if (number != 9)
{
	putchar(',');
	putchar(' ');
}

	number ++;
	}
	putchar('\n');
		return (0);
}
