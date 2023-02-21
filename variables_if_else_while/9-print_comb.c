#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		if (numbers != '9')
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}

	return (0);
}
