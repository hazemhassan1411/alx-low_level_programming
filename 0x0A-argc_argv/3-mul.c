#include <stdio.h>
#include <stdlib.h>
/**
 * main - it is the main
 * @argc: it is avar
 * @argv: it is a var
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int S;

	if (argc == 3)
	{
		S = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", S);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
