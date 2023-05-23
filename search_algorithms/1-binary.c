#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using Binary Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start;
	size_t end;
	size_t mid;
	size_t i;

	start = 0;
	end = size - 1;

	if (array != NULL)
	{
		while (start <= end)
		{
			mid = start + (end - start) / 2;

			printf("Searching in array: ");
			for (i = start; i <= end; i++)
			{
				printf("%d", array[i]);
				if (i < end)
					printf(", ");
			}
			printf("\n");
			if (value == array[mid])
			{
				return (mid);
			}
			else if (value < array[mid])
			{
				end = mid - 1;
			}
			else
			{
				start = mid + 1;
			}
		}
	}
	return (-1);
}
