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

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	return (dest);
}
