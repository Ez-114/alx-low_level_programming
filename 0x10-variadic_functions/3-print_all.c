#include "variadic_functions.h"

/**
* print_char - prints a character
* @separator: separates before printing
* @ap: argument pointer
*/
void print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
* print_int - prints an integer
* @separator: separates before printing
* @ap: arg pointer
*/
void print_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
* print_float - prints a float
* @spearator: separates before printing
* @ap: arg pointer
*/
void print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
* print_str - prints a string
* @separator: separates before printing
* @ap: arg pointer
*/
void print_str(char *separator, va_list ap)
{
	printf("%s%s", separator, va_arg(ap, char *));
}

/**
* print_all - print every passed var
* @format: string formated
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	va_list args;
	char *separator = "";
	format_t formats[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_str},
			{NULL, NULL}
			};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (formats[j].c[0] == format[i])
			{
				formats[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
