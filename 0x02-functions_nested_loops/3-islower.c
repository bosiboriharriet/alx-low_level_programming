#include "main.h"

/**
 * _islower - Checks for lowercase letters
 *
 * c - input lower case letter to be checked
 *
 * Return: 1 if c is lowercase otherwise return is 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
