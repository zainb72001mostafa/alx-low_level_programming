#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print character in lower case from a to z'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; 'a' <= 'z'; ch++)
		putchar(ch);

	return (0);
}
