#include "main.h"
/**
 * _length_str - the size of string
 * @st: string
 * Return: integer
 */
int _length_str(char *st)
{
	if (*st == '\0')
		return (0);
	st++;
	return (_length_str(st) + 1);
}

/**
 * palindrome_rule - function check-out palindrome
 * @p: string
 * @i: first parameter for index 0
 * @j: second parameter for last char of str
 * Return: 1 is palindrome 0 is not
 */
int palindrome_rule(char *p, int i, int j)
{
	if (p[i] != p[j])
		return (0);
	if (i < j + 1)
		return (palindrome_rule(p, i + 1, j - 1));
	return (1);
}
/**
 * is_palindrome - functin test
 * @s: string to test
 * Return: integer
 */
int is_palindrome(char *s)
{
	int le;

	le = _length_str(s);
	if (le == 0)
		return (1);
	return (palindrome_rule(s, 0, le - 1));
}
