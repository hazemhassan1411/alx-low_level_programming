#include <stdio.h>
/**
 * main - it is the main
 * @argc: it is avar
 * @argv: it is a var
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	while (argc--)
	{

		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
