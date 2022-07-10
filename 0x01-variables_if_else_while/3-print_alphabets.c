#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 1;
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
		num++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
		num++;
	}
	putchar('\n');
	return (0);
}
