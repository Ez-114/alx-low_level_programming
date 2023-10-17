#include "main.h"
#include <stdio.h>

/**
 * main - test _strlen() function
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char str[] = "School";
	int len;

	len = _strlen(str);
	printf("%d\n", len);

	return (0);
}
