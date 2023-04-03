#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: 'print numbers from 0 to 14 ten times'
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
