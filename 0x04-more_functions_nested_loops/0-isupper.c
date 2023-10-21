/**
 * _isupper - check if the given char is an upper alpha
 * @c: input char
 *
 * Return: 1 (Success) 0 (Fail)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
