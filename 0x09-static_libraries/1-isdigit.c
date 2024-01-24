/**
 * _isdigit - check if given var is digit
 * @c: tested var
 *
 * Return: 1 (Success) 0 (Fail)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
