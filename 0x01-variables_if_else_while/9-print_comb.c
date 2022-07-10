#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	while (i = 0; i <= 9; i++)
	{
		putchar((i/10) + '0');
		putchar((i%10) + '0');
		putchar(',');
	}
	return (0);
}
