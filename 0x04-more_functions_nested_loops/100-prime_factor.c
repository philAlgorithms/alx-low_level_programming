#include <stdio.h>

/**
 * main - prints the prime factor of a number
 */
int main(void)
{
	long p = 612852475143, quotient;

	while (quotient < (p / 2))
	{
		if ((p % 2) == 0)
		{
			p /= 2;
			continue;
		}

		for (quotient = 3; quotient < (p / 2); quotient += 2)
		{
			if ((p % quotient) == 0)
				p /= quotient;
		}
	}

	printf("%ld\n", p);

	return (0);
}
