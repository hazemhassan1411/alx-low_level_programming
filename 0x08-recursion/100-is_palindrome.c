#include "main.h"

/**
 * last_n-a function help____
 *@s: pointer___
 * Return: A_l_w_a_y_s (n)____
 */
int is_palindrome(char *s);
int charactar(char *soso, int st, int finall, int mody);
int last_n(char *s)
{
	int no = 0;

	if (*s > '\0')
		no += last_n(s + 1) + 1;
		return (no);
}

/**
 *is_palindrome-a function returns 1 if a string is a palindrome and 0 if not_
 * Return: A_l_w_a_y_s (n)____
 *@s: pointer___
 */
int is_palindrome(char *s)
{
	int finall = last_n(s);
		return (charactar(s, 0, finall - 1, finall % 2));
}

/**
 * charactar-a function help____
 *@s:pointer___
 *@st: h_e_1
 *@mody: help_2___
 *@finall: he_3
 * Return: A_l_w_a_y_s (n)____
 */

int charactar(char *s, int st, int finall, int mody)
{
	if ((st == finall && mody != 0) || (st == finall + 1 && mody == 0))
		return (1);
	else if (s[st] != s[finall])
		return (0);
	else
		return (charactar(s, st + 1, finall - 1, mody));
}
