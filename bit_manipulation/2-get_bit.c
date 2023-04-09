#include "main.h"

/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int longInt;

	if (index > 63)
	{
		return (-1);
	}
	longInt = 1 << index;
	return ((n & longInt) > 0);
}
