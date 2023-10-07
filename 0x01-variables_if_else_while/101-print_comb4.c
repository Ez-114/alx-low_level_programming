#include <stdio.h>

/**
  * main - printf combination of 3 digits
  *
  * Return: 0 Always
  */
int main(void)
{
	int inner, mid, outer = 48;

	while (outer < 56)
	{
		mid = outer + 1;

		while (mid < 57)
		{
			inner = mid + 1;

			while (inner < 58)
			{
				putchar(outer);
				putchar(mid);
				putchar(inner);

				if (outer != 55)
				{
					putchar(',');
					putchar(' ');
				}
				inner++;
			}
			mid++;
		}
		outer++;
	}
	putchar('\n');

	return (0);
}
