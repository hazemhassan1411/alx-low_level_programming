#include "main.h"
/**
 * is_char - it is a func
 * @c: it is char
 * Return: alpha
 */
int is_char(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/**
 * check_palindrome - it is a func to check
 * @s: it is pointer
 * @left: it is left
 * @right: it is right
 * Return: return
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	while (!is_char(s[left]) && left < right)
	{
		left++;
	}
	while (!is_char(s[right]) && left < right)
	{
		right--;
	}

	if (s[left] != s[right])
	{
		return (0);
	}
		return (check_palindrome(s, left + 1, right - 1));
}
/**
 * is_palindrome - it is a func
 * @s: it is
 * Return: return
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (check_palindrome(s, 0, length - 1));
}
