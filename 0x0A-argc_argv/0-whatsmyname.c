#include <stdio.h>
#include <stdlib.h>

/**
* main - driver function, prints this file name
* @argc: contains the count of the passed arguments
* @argv: contains the arguments passed
*
* Return: (0) if success.
*/
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
