#include "main.h"

/**
 * print_line - prints line on terminal
 * @n: tills how many '_' to print
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
