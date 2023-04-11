#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: String Array
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int i, j, k, h;

	i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	k = i + j + 1;
	tmp = malloc(k * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	for (h = 0; h < i; h++)
		tmp[h] = s1[h];
	for (h = 0; h <= j; h++)
		tmp[h + i] = s2[h];
return (tmp);
}
