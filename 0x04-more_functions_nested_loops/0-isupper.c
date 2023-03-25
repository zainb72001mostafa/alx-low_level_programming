#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: 'check if the letter is upper or lower case'
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}
