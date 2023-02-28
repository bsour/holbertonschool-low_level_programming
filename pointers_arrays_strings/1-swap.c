#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: an integer to swap
 * @b: an integer to swap
 *
 * RETURN: void
 */

void swap_int(int *a, int *b)
{
	int swapped = *a;

	*a = *b;
	*b = swapped;
}
