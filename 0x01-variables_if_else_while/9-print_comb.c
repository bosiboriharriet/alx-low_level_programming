#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 8)
	{
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('9');
	return (0);
}
