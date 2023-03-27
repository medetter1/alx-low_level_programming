#include "main.h"

/**
 * _puts - display string
 * @s: point to string
 *
 */
void _puts(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
