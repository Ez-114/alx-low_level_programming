#include <stdio.h>
#include <stdlib.h>

/**
* main - driver code, multiplies two numbers
* @argc: arguments count
* @argv: vector of arguments
*
* Return: (0) Success, (1) Error
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
