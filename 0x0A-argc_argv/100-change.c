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
	if (argc == 2)
	{
		int i, lc = 0, m = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				lc += c[i];
				m = m % c[i];
				if (m % c[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		return (0);
}
