#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if the random number is positive, negative or zero
 *
 * Return always- returns 0 if program runs successfully
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 *using if else loop to iterate throgh all the possible conditions
	 *
	 */
	if (n < 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n > 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
