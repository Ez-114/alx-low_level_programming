/**
  * rot13 - encodes a string
  * @str: pointer to the passed string
  *
  * Return: encoded string
  */
char *rot13(char *str)
{
	char *ptr = str;
	char letter[] =
	{
		'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p',
		'q', 'r', 's', 't',
		'u', 'v', 'w', 'x',
		'y', 'z'
	};
	int replace[] =
	{
		'n', 'o', 'p', 'q',
		'r', 's', 't', 'u',
		'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c',
		'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k',
		'l', 'm'
	};
	int i;

	while (*str != '\0')
	{
		for (i = 0; i < 26; i++)
		{
			if (*str == letter[i])
			{
				*str = replace[i];
				break;
			}
			else if (*str == (letter[i] - 32))
			{
				*str = replace[i] - 32;
				break;
			}
		}
		str++;
	}
	return (ptr);
}
