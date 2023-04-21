#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_all - function
 * @format: const the format to choice
 *
 * Description: prints all
 * Return: return (0)
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *stri, *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					stri = va_arg(list, char *);
					if (!stri)
						stri = "(nil)";
					printf("%s%s", separator, stri);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
