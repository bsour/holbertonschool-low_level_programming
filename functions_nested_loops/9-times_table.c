#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * ro = row, col = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */

void times_table(void)
{
	int ro, col, d;

	for (ro = 0; ro <= 9; ro++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			d = (ro * col);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
