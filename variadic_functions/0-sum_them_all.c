#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int total, temp;
	unsigned int i;

	total = 0;
	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			temp = va_arg(args, int);
			total += temp;
		}
		va_end(args);
		return (total);
	}
}
