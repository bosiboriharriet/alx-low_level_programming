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
		ch = 1;
	}
	else
	{
		ch = 0;
	}
	return (ch);
}
