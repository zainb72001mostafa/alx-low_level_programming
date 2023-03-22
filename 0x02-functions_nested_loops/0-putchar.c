#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program to print _putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(s[i]);
	}

	putchar('\n');
	return (0);
}
