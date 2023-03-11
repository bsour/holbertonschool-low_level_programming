#include "main.h"

/**
 * more_numbers - Prints 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, j, k, doubleVal;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				for (k = 0; k < 2; k++)
				{
					if (k == 0)
						doubleVal = i / 10;
					else
						doubleVal = i % 10;
					_putchar(doubleVal + '0');
				}
			}
		}
		_putchar('\n');
	}
}
