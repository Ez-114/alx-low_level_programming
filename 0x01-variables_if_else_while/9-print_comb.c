#include <stdio.h>

/**
  * main - prints combinations of single-digit numbers.
  *
  * Return: 0 Always
  */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
