#include <stdio.h>
/**
 * main - write alphabet
 * Descripthion: prints all the alphabet in lowercase
 * Return: always 0
*/

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	while (ALPHA <= 'Z')
	{
	putchar(ALPHA);
	ALPHA++;
	}
	putchar('\n');
	return (0);
}
