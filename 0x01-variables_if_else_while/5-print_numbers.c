#include <stdio.h>

/**
  * main - print numbers from 0 to 9
  *
  * Return: 0 Always
  */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	putchar('\n');

	return (0);
}
