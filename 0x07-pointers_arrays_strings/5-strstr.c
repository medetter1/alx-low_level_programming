#include "main.h"
/**
 * lenght_str - function size
 * @p: string
 * Return: integer
 *
 */
int lenght_str(char *p)
{
	int i;

	i = 0;

	while (p[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strstr - function
 * @haystack: first parameter
 * @needle: second parameter
 * Return: pointer
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int m, n, j, x, c;
	char *p;

	n = lenght_str(needle);
	j = 0;

	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			p = &haystack[j];
			m = j;
			x = 0;

			for (c = 0; c < n; c++)
			{
				if (haystack[m] == needle[c])
				{
					x++;
				}

					m++;
			}
		}
		if (x == n)
		{
			return (p);
		}
		j++;
	}
	return ('\0');
}

