#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	putchar('0');

	while (i <= 9)
	{
		putchar(',');
		putchar((i % 10) + '1');
		i++;
		putchar(' ');
	}
	return (0);
}
