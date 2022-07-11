#include "main.h"

/**
 * _islower - Checks for lowercase letters
 *
 * Return: 1 if c is lowercase otherwise return is 0
 */
int _islower(int c)
{
	char ch;

	if (ch >= 'a' && ch <= 'z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
