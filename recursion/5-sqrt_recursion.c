#include "main.h"

int _sq_root(int x, int y);
int _sqrt_recursion(int n);

/**
 * _sq_root - finds the natural square root of a number recursively
 * @x: the number to find the square root of
 * @y: the current candidate for the square root
 *
 * Return: the square root of x if it exists, or -1 if it doesn't
 */

int _sq_root(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (_sq_root(x, y + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _sqrt_recursion(int n)
{
	return (_sq_root(n, 1));
}
