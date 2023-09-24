#include "main.h"
/**
 * is_valid_char - it is a func
 * @c: it is a char
 * Return: alpha
 */
int is_valid_char(char c)
{
return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/**
 * is_palindrome - it is a func
 * @s: it is a var
 * Return: return
 */
int is_palindrome(char *s)
{
	int le = 0;
	int ri = strlen(s) - 1;

	while (le < ri)
	{
		while (!is_valid_char(s[le]) && le < ri)
		{
			le++;
		}
		while (!is_valid_char(s[ri]) && le < ri)
		{
			ri--;
		}
		if (s[le] != s[ri])
		{
			return (0);
		}
		le++;
		ri--;
	}
	return (1);
}
