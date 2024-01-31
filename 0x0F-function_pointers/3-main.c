#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Acts as calculators.
* @argc: Arguments count
* @argv: Arguments vector
*
* Return: (98) argc != 4, (0) Success
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator = argv[2];
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op = get_op_func(operator);
	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op(num1, num2);

	printf("%d\n", result);
	return (0);
}
