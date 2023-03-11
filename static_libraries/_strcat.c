#include "main.h"

/**
 * _strcat - a fucntion that concatenates two strings
 *
 * @src: teh string to be appended
 * @dest: the other string
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
