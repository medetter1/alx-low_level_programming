#include "dog.h"
#include <stdio.h>
/**
 * print_dog - display informations of dog
 * @d: dog object
 *
 * Return: void
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("(nil)\n");
		else
			printf("Name:%s\n", (*d).name);

	printf("Age:%.5f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner:%s\n", (*d).owner);
	}
	else
		return;
}
