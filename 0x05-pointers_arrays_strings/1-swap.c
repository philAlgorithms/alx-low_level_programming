#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The pointer to first integer
 * @b: The pointer to second integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
