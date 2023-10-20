#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 * Return: 0 (Success)
*/

int main(void)
{
	unsigned long fibon1 = 0, fibon2 = 1, sum;
	float total;

	while (1)
	{
		sum = fibon1 + fibon2;

		if (sum > 4000000)
		{
			break;
		}

		if ((sum % 2) == 0)
		{
			total += sum;
		}

		fibon1 = fibon2;
		fibon2 = sum;
	}

	printf("%.0f\n", total);

	return (0);
}
