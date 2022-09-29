#include "main.h"

/**
* get_sqrt - finds the natural square root of a number
* @n: the number
* @r: the root
* Return: The square root or -1
*/
int get_sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);

	if (r == n / 2)
		return (-1);

	return (get_sqrt(n, r + 1));
}

/**
* _sqrt_recursion - returns the natural square
* @n: the number
* Return: The natural root of a number or -1
*/
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (get_sqrt(n, r));
}

