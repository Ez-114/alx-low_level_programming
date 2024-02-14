#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int res;
	res = create_file("_file_4", NULL);
	printf("-> %i)\n", res);
	return (0);
}
