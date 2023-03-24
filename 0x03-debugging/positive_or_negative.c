#include <stdlib.h>
#include <stdio.h>

/**
 * positive_or_negative - Entry point
 *
 * Description: 'print "is positive" if number greater than 0,
 * and print "is zero " if number equal to zero,
 * and "is negative " if number less than 0 '
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	int n;

	n = i;
	if (n > 0)
	{
		printf("%d %s\n", n, "is positive");
	}
	else if (n == 0)
	{
		printf("%d %s\n", n, "is zero");
	}
	else
	{
		printf("%d %s\n", n, "is negative");
	}

}
