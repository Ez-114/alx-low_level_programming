#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* n_num - scan the passed string and check if there is letters or symbols
* @str: passed str
* Return: (1) if not number found, (0) if no symbols or letters found
*/
int n_num(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
			return (1);
	}

	return (0);
}

/**
* main - add passed numbers from the terminal
* @argc: arg count
* @argv: arg vector
* Return: (0) Success, (1) Fail
*/
int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* TODO Check if the passed arg is a letter or a number */
	for (i = 1; i < argc; i++)
	{
		if (n_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
