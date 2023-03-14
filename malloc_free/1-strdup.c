#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate.
 *
 * Return: a pointer to the duplicated string, or NULL if insufficient memory
 * was available.
 */

char *_strdup(char *str)
{
	char *str_copy;
	int i, len;

	if (str == 0)
	{
		return (NULL);
	}
	len = 0;
	while (str[len])
	{
		len++;
	}
	len++;

	str_copy = malloc(sizeof(char) * len);

	if (str_copy == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str_copy[i] = str[i];
	}
	return (str_copy);
}
