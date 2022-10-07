#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimun integer element of the array
 * @max: maximum integer element of the array
 *
 * Return: an array containing ordered elements from min to max.
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i - min] = i;

	return (arr);
}
