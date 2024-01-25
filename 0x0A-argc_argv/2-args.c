#include <stdio.h>

/**
* main - driver code, prints all the args passed
* @argc: arguments count
* @argv: vector of arguments
*
* Return: (0) success
*/
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		while (argc--)
		{
			printf("%s\n", *argv++);
		}
	}
	else
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
