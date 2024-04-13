#include "main.h"

/**
  * _isalpha - checks for alphabetic character
  * @c: character to be checked
  *
  * Return: 1 if it is alphabet. 0 otherwise.
  */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}

	return (0);
}
