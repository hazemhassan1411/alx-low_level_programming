#include <stdio.h>

/**
 * main - write alphabet
 * Descripthion: prints all the number
 * Return: always 0
*/

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
			number++;
	}
	putchar('\n');
return (0);
}
