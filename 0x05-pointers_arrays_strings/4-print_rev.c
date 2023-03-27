#include "main.h"

/**
 * print_rev - Entry point
 * @s: string to be print
 * Description: 'print string in reverse'
 *
 */

void print_rev(char *s)
{
	int l;
	int i;

	l = 0;
	while (*(s + l) != '\0')
	{
		l++;
	}
	for (i = l; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');

}
