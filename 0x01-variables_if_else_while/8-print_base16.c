#include <stdio.h>

/**
 * main - write alphabet
 * Descripthion:  prints all the numbers of base 16 in lowercase
 * Return: always 0
*/

int main(void)
{
	int number = 48;

	while (number <= 102)
	{
	putchar(number);

	if (number == 57)
		number += 39;
	number++;

	}

	putchar('\n');
return (0);
}
