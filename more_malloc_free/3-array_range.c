#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers containing values from min to max
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: On success, a pointer to the newly created array. On failure, NULL.
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
