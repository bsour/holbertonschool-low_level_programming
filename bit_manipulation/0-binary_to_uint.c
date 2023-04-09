#inlcude "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*B != '0' && != '1')
			return (0);

		result = (result << 1) + (*b++ - '0');
	}
	return (result);
}
