#include <stdio.h>

/**
  * main - prints the numbers of base 16
  *
  * Return: 0 Always
  */
int main(void)
{
	int num16 = 48;

	while (num16 < 58)
	{
		putchar(num16);
		num16++;
	}

	num16 = 97;

	while (num16 < 103)
	{
		putchar(num16);
		num16++;
	}

	putchar('\n');

	return (0);
}
