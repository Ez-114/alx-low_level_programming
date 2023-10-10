#include "main.h"

/**
  * main - prints text using _putchar()
  *
  * Return: 0 Always
  */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
