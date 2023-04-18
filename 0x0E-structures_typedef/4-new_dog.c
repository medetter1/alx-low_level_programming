#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * len_infos - size of name and owner
 * @s: string pointer
 * Return: integer
 */
int len_infos(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
return (i);
}
/**
 * new_dog - create new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: the owner of dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lenName = 0, lenOwner = 0, i, j;
	char *na, *ow;

	lenName = len_infos(name);
	lenOwner = len_infos(owner);

	na = malloc(sizeof(char) * lenName);
	if (na == NULL)
	{
		return (NULL);
	}
	ow = malloc(sizeof(char) * lenOwner);
	if (ow == NULL)
	{
		free(na);
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(na);
		free(ow);
		return (NULL);
	}
	d->age = age;
	for (i = 0; i < lenName; i++)
	{
		na[i] = name[i];
	}
	for (j = 0; j < lenOwner; j++)
	{
		ow[j] = owner[j];
	}
	/*d->name = na;*/
	/*d->age = age;*/
	/*d->owner = ow;*/
	return (d);
}
