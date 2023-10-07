#include <stdio.h>

/**
  * main - prints combination of 2 digits
  *
  * Return: 0 Always
  */
int main(void)
{
	int outer = 48, inner;

	while (outer < 57)
	{
		inner = outer + 1;

		while (inner < 58)
		{
			putchar(outer);
			putchar(inner);

			if (outer != 56)
			{
				putchar(',');
				putchar(' ');
			}

			inner++;
		}

		outer++;
	}

	putchar('\n');

	return (0);
}
