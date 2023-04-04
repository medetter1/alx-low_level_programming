#include "main.h"

/**
 * _strpbrk - finds the first character in s that matches any character in ac
 * @s: string to be scanned
 * @accept: string containing the characters to match.
 * Return: pointer to character in s1 that matches one of the characters in s2
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = (s + i);
				return (p);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

