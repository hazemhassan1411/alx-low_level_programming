#include <stdio.h>
#include "main.h"

/**
 * _puts - it is func
 * @str: it is pointer
 * Return: return
 */

void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

