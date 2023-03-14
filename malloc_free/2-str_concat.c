#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space containing the concatenated string
 *         NULL if allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int len_s1 = 0;
	int len_s1 = 0;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	array = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (array = NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		array[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		array[i] = *s2;
		s2++;
		i++;
	}
	array[i] = '\0';

	return (array);
}
