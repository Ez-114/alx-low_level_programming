#include "main.h"

/**
 * swap_int - swap two given integers
 * @a: first integer
 * @b: second integer
 * Description: using a temp variable it will swap the two ints effortlessly
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
