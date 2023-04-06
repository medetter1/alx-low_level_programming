#include "main.h"
/**
 * prime_rule - function rule of prime
 * @n: the number
 * @x: divisor
 * Return: integer 1 is prime 0 is not prime
 */
int prime_rule(int n, int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + prime_rule(n, x + 1));
}
/**
 * is_prime_number - Check number is prime
 * @n: the number
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_rule(n, 2));
}

