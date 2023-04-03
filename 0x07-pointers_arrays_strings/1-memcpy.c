#include "main.h"
/**
 * _memcpy - fills memory with another buffer.
 * @dest: destination string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
