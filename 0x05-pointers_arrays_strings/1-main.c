#include <stdio.h>
#include "main.h"

/**
 * main - tests swap_int() function
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int x = 3, y = 5;

	swap_int(&x, &y);
	printf("x: %d\ny: %d\n", x, y);

	return (0);
}
