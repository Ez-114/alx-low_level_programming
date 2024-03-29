#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - print numbers using a passed separator
* @separator: separator between numbers ', '
* @n: number of integers passed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
