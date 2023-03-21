#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print character in lower case in reverse order'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
