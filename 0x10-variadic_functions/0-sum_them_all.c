#include <stdarg.h>

/**
* sum_them_all - sum all passed numbers
* @n: number
* Return: (Sum) Success, (0) Failure
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);
	return (sum);
}
