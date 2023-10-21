#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
*/

int main(void)
{
	long double sum = 0, fib1 = 0, fib2 = 1;
	int n;

	for (n = 0; n < 98; n++)
	{
		sum = fib1 + fib2;
		printf("%0.Lf", sum);
		fib1 = fib2;
		fib2 = sum;

		if (n < 97)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
