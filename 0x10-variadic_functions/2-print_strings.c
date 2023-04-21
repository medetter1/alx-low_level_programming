#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings function
 * @separator: separate strings
 * @n: numbers of strings
 * @...: the other parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st_print;
	unsigned int c = 0;
	char *array;

	va_start(st_print, n);
	for (; c < n; c++)
	{
		array = va_arg(st_print, char *);
		if (array == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", array);
		}
		if (c != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(st_print);
	printf("\n");
}
