#include "main.h"

/**
 * _isalpha - checks for alphabetic character
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
