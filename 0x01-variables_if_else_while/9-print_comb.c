#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9 || i++)
	{
		putchar((i/10) + '0');
		putchar((i%10) + '0');
		putchar(',');
	}
	return (0);
}
