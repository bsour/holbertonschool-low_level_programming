#include "main.h"

int if_prime(int a, int b);
/**
 * if_prime - evaluates from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1.
 */
int if_prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (if_prime(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error - -1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (if_prime(n, 2));
}
