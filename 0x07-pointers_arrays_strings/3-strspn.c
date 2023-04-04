#include "main.h"
/**
 * _strspn - display successive characters.
 * @s: source
 * @accept: search string
 *
 * Return: string.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int res;

	i = 0;
	j = 0;
	res = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				res++;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (res);
}
