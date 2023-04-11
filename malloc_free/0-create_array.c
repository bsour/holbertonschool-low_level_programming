#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *create_array - program startup
 * @size: int being evaluated
 * @c: char being evaluated
 * Return: (0)
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
