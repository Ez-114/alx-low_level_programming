/**
 * _memset - fills memory with constant byte
 * @s: passed string
 * @b: character to fill with
 * @n: number of bytes to fill
 *
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
