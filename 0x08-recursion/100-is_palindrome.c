#include "main.h"
/**
 * is_palindrome - it is a func
 * @s: it is a var
 * Return: return
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
	if (s[start] != s[end])
	{
		return (0);
	}
	start++;
	end--;
	}

	return (1);
}
