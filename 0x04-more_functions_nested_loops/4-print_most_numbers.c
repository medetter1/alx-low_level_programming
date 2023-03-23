#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		else
			continue;
	}
		_putchar('\n');
}
