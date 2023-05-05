#include "main.h"
/**
 * flip_bits - returns the result about d between 2 numbers.
 * @n: the input number1
 * @m: input number 2
 * Return: input
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int res;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		res = ex >> i;
		if (res & 1)
			counter++;
	}

	return (counter);
	return (res);
}
