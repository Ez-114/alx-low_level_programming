#include <stdio.h>

/**
  * main - prints the alphabet in sequence
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

	putchar('\n');

	return (0);
}
