#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	char numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		putchar(',');
		putchar(' ');
		numbers++;
	}
	putchar('\n');

	return (0);
}
