#include "main.h"
/**
 * _print_last_digits - function
 * @x: single letter input
 * Return: int
 */
int print_last_digit(int x)
{
	int y;

	y = (x % 10);

	if (y < 0)
	{
		y = (-1 * y);
	}

	_putchar(y + '0');
	return (y);
}
