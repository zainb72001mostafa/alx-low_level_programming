#include "main.h"
#include <stdio.h>
/**
 * _strcat - Entry point
 * @dest: The destination string
 * @src: The source string
 * Description: 'function concatenates two string'
 *
 * Return: pointer to result string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; *(src + j) != 0; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);

}
