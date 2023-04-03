#include "main.h"
/**
 * _strchr - function strch
 * @s: string
 * @c: character to search about it
 * Return: string
 */


char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
