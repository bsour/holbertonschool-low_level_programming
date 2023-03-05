#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of a substring
 */


char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int x;

	i = 0;
	x = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + x] != '\0' && haystack[i + x] != '\0'
		       && needle[j + x] == haystack[i + x])
		{
			if (haystack[i + x] != needle[j + x])
				break;
			c++;
		}
		if (needle[j + x] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}
	return (NULL);
}
