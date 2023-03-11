#include <stdio.h>

/**
 * main - print base 10 single digit numbers using putchar
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);
}
