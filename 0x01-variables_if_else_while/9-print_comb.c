#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		i++;
	}
	return (0);
}
