#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1ul << ((sizeof(unsigned long int) * 8) - 1);

	while (i > 0)
	{
		if ((n & i) == 0)
		{
			_putchar('0');
		}
		else
		{
			_puthcar('1');
		}
		i = i >> 1;
	}
}
