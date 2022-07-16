#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: value one
 * @b: value two
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
