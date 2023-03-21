#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'print "is positive" if number greater than 0,
 * and print "is zero " if number equal to zero,
 * and "is negative " if number less than 0 '
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
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
	return (0);
}
