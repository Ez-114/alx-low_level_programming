#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - prints all natural numbers
  * @n: start point
  */

void print_to_98(int n)
{
	do {
		printf("%d", n);

		if (n < 98)
		{
			printf(", ");
			n++;
		}
		else if (n > 98)
		{
			printf(", ");
			n--;
		}
	} while (n < 99);

	printf("\n");
}
