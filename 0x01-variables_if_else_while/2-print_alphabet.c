#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 1;
	char ch ='a';
	while (ch <= 'z', num <= 26)
	{
		putchar(ch);
		ch++;
		num++;
	}
	putchar('\n');
	return 0;
}
