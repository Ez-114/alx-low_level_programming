#include <stdio.h>

/**
 * multiples - prints sum of multiples of 5 and 3
 * @n: integer
*/

void multiples(int n)
{
	int i, sum = 0;

	if (n == 1024)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}

	printf("%d\n", sum);
}
