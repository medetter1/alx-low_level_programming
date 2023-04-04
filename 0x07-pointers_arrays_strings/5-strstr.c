#include "main.h"
/**
 * _strstr - function
 * @haystack: first parameter
 * @needle: second parameter
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				do {
					if (needle[j + 1] == '\0')
					{
						return (haystack);
					}
					i++;
					j++;
				} while (haystack[i] == needle[j]);
			}
			haystack++;
		}
	}
	return ('\0');
}

