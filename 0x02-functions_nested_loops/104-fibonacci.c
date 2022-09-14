#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by a comma
 * followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int index;
	unsigned long fibb1 = 0, fibb2 = 1, summation;
	unsigned long fibb1_split1, fibb1_split2, fibb2_split1, fibb2_split2;
	unsigned long split1, split2;

	for (index = 0; index < 92; index++)
	{
		summation = fibb1 + fibb2;
		printf("%lu, ", summation);

		fibb1 = fibb2;
		fibb2 = summation;
	}

	fibb1_split1 = fibb1 / 10000000000;
	fibb2_split1 = fibb2 / 10000000000;
	fibb1_split2 = fibb1 % 10000000000;
	fibb2_split2 = fibb2 % 10000000000;

	for (index = 93; index < 99; index++)
	{
		split1 = fibb1_split1 + fibb2_split1;
		split2 = fibb1_split2 + fibb2_split2;
		if (fibb1_split2 + fibb2_split2 > 9999999999)
		{
			split1 += 1;
			split2 %= 10000000000;
		}

		printf("%lu%lu", split1, split2);
		if (index != 98)
			printf(", ");

		fibb1_split1 = fibb2_split1;
		fibb1_split2 = fibb2_split2;
		fibb2_split1 = split1;
		fibb2_split2 = split2;
	}
	printf("\n");
	return (0);
}
