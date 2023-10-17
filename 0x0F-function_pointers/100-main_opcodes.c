#include <stdio.h>
#include <stdlib.h>

/**
 * main - it is main
 * @argc: it is argc
 * @argv: it is argv
 * Return: return 0
 */

int main(int argc, char **argv)
{
        char *f = (char *)main;
        int h;

        if (argc != 2)
                printf("Error\n"), exit(1);
                h = atoi(argv[1]);
        if (h < 0)
                printf("Error\n"), exit(2);
        while (h--)
                printf("%02hhx%s", *f++, h ? " " : "\n");
        return (0);
}
