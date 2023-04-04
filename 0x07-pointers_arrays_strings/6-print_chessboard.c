#include "main.h"

/**
 * print_chessboard - function print matrix 2D
 * @a: parameter
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] == ' ')
			{
				_putchar(' ');
			}
			_putchar(a[i][j]);

		}
		_putchar('\n');
	}
}
