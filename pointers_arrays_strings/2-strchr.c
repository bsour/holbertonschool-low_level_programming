#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the memory area
 * @c: constant byte
 *
 * Return: a pointer when the character is found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
