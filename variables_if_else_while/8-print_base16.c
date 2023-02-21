#include <stdio.h>

/**
 * main - prints all numbers of base 16
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	x = 'a';

	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
