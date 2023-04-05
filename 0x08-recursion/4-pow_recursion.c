#include "main.h"
/**
 * _pow_recursion - pow function
 * @x: base
 * @y: exponent
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	if (y == 0)
		return (1);
	if (y > 0)

		--y;
	return (x * _pow_recursion(x, y));

}
