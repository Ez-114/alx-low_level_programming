#include <stdio.h>

/**
  * main - prints alphabets lower caser and upper case
  *
  * Return: 0 Always
  */
int main(void)
{
	int i = 97;

	while (i != 123)
	{
		putchar(i);
		i++;
	}

	i = 65;

	while (i != 91)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
