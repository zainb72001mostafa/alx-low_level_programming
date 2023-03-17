#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print the type of privious variable'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char charType;
	int intType;
	long int longInt;
	long long int lli;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("Size of a float: %d byte(s)", sizeof(floatType));
	return (0);
}
