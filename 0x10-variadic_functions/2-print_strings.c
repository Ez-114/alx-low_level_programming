#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_strings - prints strings with separator
* @separator: separates passed string while printing
* @n: number of passed strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;
	char *current;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		current = va_arg(strs, char *);
		if (current)
			printf("%s", current);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
