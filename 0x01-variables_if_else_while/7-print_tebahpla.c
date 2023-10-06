#include <stdio.h>

/**
  * main - print alphabets in reverse order
  *
  * Return: 0 Always
  */
int main(void)
{
	int r = 122;

	while (r > 96)
	{
		putchar(r);
		r--;
	}

	putchar('\n');

	return (0);
}
