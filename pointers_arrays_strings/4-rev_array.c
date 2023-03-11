#include "main.h"

/**
 * reverse_array - reverse the content of an array of int
 * @a: the pointer to the array
 * @n: number of elements in the array
 *
 * Return: zero
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
