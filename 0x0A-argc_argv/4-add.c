#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print result of sum of multiple ints
 * @argc: arg count
 * @argv: arg value
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		printf("%s\n", argv[argc - 1]);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
