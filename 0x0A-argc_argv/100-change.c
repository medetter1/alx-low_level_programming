#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins.
 * @argc: argument counter.
 * @argv: argument array.
 * Return: integer.
 */
int main(int argc, char *argv[])
{
int money = 0, coins = 0;

if (argc > 2 || argc < 2)
{
	printf("Error\n");
	return (1);
}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else if (atoi(argv[1]) >= 0)
	{
		money = atoi(argv[1]);
		while (money)
		{
			if (money >= 25)
			{
				money = money - 25;
				coins++;
			}
			else if (money >= 10)
			{
				money = money - 10;
				coins++;
			}
			else if (money >= 5)
			{
				money = money - 5;
				coins++;
			}
			else if (money >= 2)
			{
			money = money - 2;
			coins++;
			}
			else
			{
			money = money - 1;
			coins++;
			}
		}
	printf("%d\n", coins);
	}
	return (0);
}
