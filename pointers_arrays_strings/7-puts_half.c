#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: str that will be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, half;

	len = 0;
	while (str[len] != '\0')
		len++;

	half = len / 2;

	if (len % 2 == 1)
		half++;

	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
