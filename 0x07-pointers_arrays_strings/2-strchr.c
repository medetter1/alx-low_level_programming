#include "main.h"
/**
 * _strchr _ function strch
 * @s: string
 * @c: character to search about it
 * Return: string
 */


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
