#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print digits from 0 to 10'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	putchar('\n');
	return (0);
}
