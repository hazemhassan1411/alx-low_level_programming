#include <stdio.h>
/**
 * main - it is a func
 * @argc: it is a number
 * @argv: it is a string
 * Return: return
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
