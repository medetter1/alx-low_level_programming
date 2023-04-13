#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * len_str - string size
 * @s: string
 * Return: integer size
 */
unsigned int len_str(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of characters to concatenate
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len2 = len_str(s2);
	len1 = len_str(s1);

	if (n >= len2)
	{
		n = len2;
	}
	res = malloc(sizeof(char) * (len1 + n + 1));
	j = 0;
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		res[i] = s1[i];
	}
	for (; i < (len1 + n); i++)
	{
		res[i] = s2[j];
		j++;
	}
	res[i] = '\0';
	return (res);
}
