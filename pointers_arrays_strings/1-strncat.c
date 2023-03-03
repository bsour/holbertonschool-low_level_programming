#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	return (dest);
}
