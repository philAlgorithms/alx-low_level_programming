#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
