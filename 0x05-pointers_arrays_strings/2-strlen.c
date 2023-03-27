#include "main.h"

/**
 * _strlen - Entry point
 * @s: string
 * Description: 'find out string length'
 *
 * Return: length of string (Success)
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
