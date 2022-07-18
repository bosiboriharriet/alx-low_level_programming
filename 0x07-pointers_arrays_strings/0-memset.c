#include "main.h"

/**
 * _memset - fills a block of memory with a specified value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes that will be changed
 * Return: changed array with the new value with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}