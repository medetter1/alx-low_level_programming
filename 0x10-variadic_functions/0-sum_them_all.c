#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum
 * @n: first value parametr
 *
 * * Return: always int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int c = 0;
	unsigned int res = 0;

	if (n == 0)
		return (0);
	va_start(sum, n);
	for (; c < n; c++)
	{
		res += va_arg(sum, int);
	}
	va_end(sum);
	return (res);
}
