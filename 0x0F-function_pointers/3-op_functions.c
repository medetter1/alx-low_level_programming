#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function sum
 * @a: integer
 * @b: integer
 * Return: integer res
 */
int op_add(int a, int b)
{
	int res = 0;

	res = a + b;
	return (res);
}
/**
 * op_sub - function sub
 * @a: integer
 * @b: integer
 * Return: integer res
 */
int op_sub(int a, int b)
{
	int res = 0;

	res = a - b;
	return (res);
}
/**
 * op_mul - function multipliy
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mul(int a, int b)
{

	return (a * b);
}
/**
 * op_div - function division
 * @a: first integer
 * @b: second integer
 * Return: integer res
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function modulo
 * @a: first parameter
 * @b: second parameter
 * Return: integer res
 */
int op_mod(int a, int b)
{
	int res;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = a % b;
	return (res);
}
