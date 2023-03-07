#include "main.h"

/**
 * _sqrt_recursion - Computes the natural square root of a number
 * @n: The number to compute the square root of
 *
 * Return: The square root of `n`, or -1 if `n` does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
	    return (-1);
    }
    else if (n == 0 || n == 1)
    {
	    return (n);
    }
    else
    {
	    return (_sqrt_helper(n, 1, n));
    }
}

/**
 * _sqrt_helper - Helper function for computing the natural square root of a number
 * @n: The number to compute the square root of
 * @start: The starting value to search from
 * @end: The ending value to search to
 *
 * Return: The square root of `n`, or -1 if `n` does not have a natural square root.
 */
int _sqrt_helper(int n, int start, int end)
{
    int mid = (start + end) / 2;

    if (start > end)
    {
	    return (-1);
    }
    else if (mid * mid == n)
    {
	    return (mid);
    }
    else if (mid * mid > n)
    {
	    return (_sqrt_helper(n, start, mid - 1));
    }
    else
    {
	    return (_sqrt_helper(n, mid + 1, end));
    }
}
