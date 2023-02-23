#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_alphabet - to print a-z in lowercase
 *
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(tolower(x));
	}
}
