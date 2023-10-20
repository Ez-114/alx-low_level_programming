#include <stdio.h>

/**
 * main - print first 50 fibonacci
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int fabon = 1, i;

	for (i = 0; i <= 50; i++)
	{
		fabon += i;
		if (i != 50)
		{
			printf("%d, ", fabon);
		}
		else
		{
			printf("%d", fabon);
		}
	}
	printf("\n");

	return (0);
}
