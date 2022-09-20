#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid pass
 *
 * Return: Always 0
 */
int main(void)
{
	char pass[84];
	int ind = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		pass[ind] = 33 + rand() % 94;
		sum += pass[ind++];
	}

	pass[ind] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (ind = 0; pass[ind]; ind++)
		{
			if (pass[ind] >= (33 + diff_half1))
			{
				pass[ind] -= diff_half1;
				break;
			}
		}
		for (ind = 0; pass[ind]; ind++)
		{
			if (pass[ind] >= (33 + diff_half2))
			{
				pass[ind] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", pass);

	return (0);
}
