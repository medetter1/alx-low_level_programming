#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(toupper(ch));
	}
	printf("\n");
	return (0);
}
