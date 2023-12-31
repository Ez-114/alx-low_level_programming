#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * main - checks the condition of the last digit of var n
  *
  * Return: 0 Always
  */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
	{
		puts("greater than 5");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		puts("less than 6 and not 0");
	}
	else if (last_digit == 0)
	{
		puts("0");
	}

	return (0);
}
