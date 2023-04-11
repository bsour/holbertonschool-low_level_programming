#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - program startup
 * @nmemb: first int being evaluated
 * @size: second int being evaluated
 * Return: return (0) is the required function signature
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
