#include <stdio.h>

/**
 * main - write alphabet
 * Descripthion: prints all the alphabet in lowercase
 * Return: always 0
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
			alpha++;
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
	return (0);
}
