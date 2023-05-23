#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - Searcheas for a value in an array
 * of integers
 * @array: Pointer to the first element in the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: -1 or the index where the value is located
 *
 */
int linear_search(int *array, size_t size, int value)
{
        size_t index;

	if (array == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index,
		       array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
