#include "main.h"

/**
 * _memset - is a function
 * @s: the first parameter pointer to string
 * @b: second parameter the character to change the string
 * @n: third parameter the n byte to change
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
