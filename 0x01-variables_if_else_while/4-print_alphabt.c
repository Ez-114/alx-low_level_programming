#include <stdio.h>

/**
  * main - printf alphabets execluding q and e
  *
  * Return: 0 Always
  */
int main(void)
{
	int i = 97;

	while (i != 123)
	{
		if (i == 113 || i == 101)
		{
			i++;
		}

		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
