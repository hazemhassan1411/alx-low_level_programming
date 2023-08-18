#include "main.h"

/**
 * main - entry
 * Description: PRINT PUTCHAR
 * Return: 0
 */



int main(void)
{
	char stringe[] = "_putchar";
	int chara;

	for (chara = 0; chara < 8; chara++)
		_putchar(stringe[chara]);
	_putchar('\n');

	return (0);
}
