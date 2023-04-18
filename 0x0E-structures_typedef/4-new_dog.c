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

	while (s[i] != '\0')
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

	lenName = len_infos(name);
	lenOwner = len_infos(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (lenName + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (lenOwner + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	for (i = 0; i <= lenName; i++)
	{
		d->name[i] = name[i];
	}
	for (j = 0; j <= lenOwner; j++)
	{
		d->owner[j] = owner[j];
	}
	/*d->name = na;*/
	/*d->age = age;*/
	/*d->owner = ow;*/
	return (d);
}
