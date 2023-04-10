#include <stdio.h>
#include <stdlib.h>
/**
 * main - add two positive numbers.
 * @argc: argument counter.
 * @argv: argument array.
 *
 * Return: integer.
 */
int main(int argc, char *argv[])
{
	int i, sum, j;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += (atoi(argv[i]));
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
