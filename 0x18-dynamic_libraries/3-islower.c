#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: character to be checked
  *
  * Return: 1 if it is lower case. 0 if not
  */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);

	return (1);
}
