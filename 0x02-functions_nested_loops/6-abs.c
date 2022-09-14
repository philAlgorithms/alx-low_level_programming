#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: The number
 *
 * Return: the abs of the number
 */
int _abs(int n)
{
	int res = n;
	
	if (n < 0)
		res = -1 * n;
	return (res);
}
