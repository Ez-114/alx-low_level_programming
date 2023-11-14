#include <stdio.h>
#include <stdlib.h>

/**
 * get_25s - calculates the total number of 25s in a given int
 * @n: pointer to the passed value
 *
 * Return: the calculated number of 25s
*/
int get_25s(int *n)
{
	int i;

	for (i = 0; *n >= 25; i++)
	{
		*n -= 25;
	}

	return (i);
}

/**
 * get_10s - get the number of 10s
 * @n: pointer to the passed value
 *
 * Return: the total number of 10s
*/
int get_10s(int *n)
{
	int i;

	for (i = 0; *n >= 10; i++)
	{
		*n -= 10;
	}

	return (i);
}

/**
 * get_5s - get the number of 5s
 * @n: pointer to the passed value
 *
 * Return: the total number of 5s
*/
int get_5s(int *n)
{
	int i;

	for (i = 0; *n >= 5; i++)
	{
		*n -= 5;
	}

	return (i);
}

/**
 * get_2s - get the number of 2s
 * @n: pointer to the passed value
 *
 * Return: the total number of 2s
*/
int get_2s(int *n)
{
	int i;

	for (i = 0; *n >= 2; i++)
	{
		*n -= 2;
	}

	return (i);
}

/**
 * main - print the number of cents(25, 10, 5, 2, 1)
 * @argc: argument count
 * @argv: argument value
 *
 * Return:  0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int centsCount = 0, dollars = 0, i;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	dollars = atoi(argv[1]);
	centsCount += get_25s(&dollars);
	centsCount += get_10s(&dollars);
	centsCount += get_5s(&dollars);
	centsCount += get_2s(&dollars);

	for (i = 0; dollars >= 1; i++)
	{
		dollars -= 1;
	}
	centsCount += i;

	printf("%d\n", centsCount);

	return (0);
}
