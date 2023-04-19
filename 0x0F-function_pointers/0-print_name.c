#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function print name
 * @name: pointer name
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
