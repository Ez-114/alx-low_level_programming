#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of multiplication of 2 ints
 * @argc: arg count
 * @argv: arg value
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc <= 2)
	{
		printf("ERROR\n");
		return (0);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
