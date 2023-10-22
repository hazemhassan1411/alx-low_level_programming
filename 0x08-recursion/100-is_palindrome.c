#include "main.h"
/**
 * last_index - it is func
 * @s: it is a pointer
 * Return: return
 */

int is_pallindrome(char *s);
int check(char *s, int start, int end, int m);
int last_index(char *s)
{
	int g = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}
/**
 * is_pallindrome - it is func
 * @s: it is a pointer
 * Return: return
 */

int is_pallindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - it is func
 * @s: it is a pointer
 * @start: it is a pointer
 * @end: it is a pointer
 * @m: it is a pointer
 * Return: return
 */
int check(char *s, int start, int end, int m)
{
	if ((start == end && m != 0) || (start == end + 1 && m == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, m))
}
