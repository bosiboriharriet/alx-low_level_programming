#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * int c - integer to be checked if it is a letter
 * Return: 1 if c is a letter. lowercase or uppercase
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
