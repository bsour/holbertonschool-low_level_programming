#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet a-z 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char x = 'a';

		while (x <= 'z')
		{
			putchar(x);
			x++;
		}
		_putchar('\n');
	}
}

/**
 * main - calls the function
 *
 * Return: 0 on success
 */

int main(void)
{
	print_alphabet_x10();

	return (0);
}
