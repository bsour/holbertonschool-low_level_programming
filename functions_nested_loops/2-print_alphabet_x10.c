#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet a-z 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i <= 9)
	{
		x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x = x + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
