#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting 
 * with 1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int index;
	unsigned long fibonnaci1 = 0, fibonnaci2 = 1, summation;
	unsigned long fibonnaci1_split1, fibonnaci1_split2, fibonnaci2_split1, fibonnaci2_split2;
	unsigned long split1, split2;

	for (index = 0; index < 92; index++)
	{
		summation = fibonnaci1 + fibonnaci2;
		printf("%lu, ", summation);

		fibonnaci1 = fibonnaci2;
		fibonnaci2 = summation;
	}

	fibonnaci1_split1 = fibonnaci1 / 10000000000;
	fibonnaci2_split1 = fibonnaci2 / 10000000000;
	fibonnaci1_split2 = fibonnaci1 % 10000000000;
	fibonnaci2_split2 = fibonnaci2 % 10000000000;

	for (index = 93; index < 99; index++)
	{
		split1 = fibonnaci1_split1 + fibonnaci2_split1;
		split2 = fibonnaci1_split2 + fibonnaci2_split2;
		if (fibonnaci1_split2 + fibonnaci2_split2 > 9999999999)
		{
			split1 += 1;
			split2 %= 10000000000;
		}

		printf("%lu%lu", split1, split2);
		if (index != 98)
			printf(", ");

		fibonnaci1_split1 = fibonnaci2_split1;
		fibonnaci1_split2 = fibonnaci2_split2;
		fibonnaci2_split1 = split1;
		fibonnaci2_split2 = split2;
	}
	printf("\n");
	return (0);
}
