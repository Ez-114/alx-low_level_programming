#include <stdio.h>

/**
  * main - prints two two-digit numbers
  * Return: 0 Always
  */
int main(void)
{
	int l_num = 0, r_num;

	while (l_num < 100)
	{
		r_num = l_num + 1;

		while (r_num < 100)
		{
			putchar(l_num / 10 + '0');
			putchar(l_num % 10 + '0');
			putchar(' ');
			putchar(r_num / 10 + '0');
			putchar(r_num % 10 + '0');

			if (l_num != 98)
			{
				putchar(',');
				putchar(' ');
			}
			r_num++;
		}
		l_num++;
	}

	putchar('\n');

	return (0);
}
