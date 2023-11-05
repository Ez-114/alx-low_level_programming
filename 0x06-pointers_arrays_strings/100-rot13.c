/**
  * rot13 - encodes a string
  * @str: pointer to the passed string
  *
  * Return: encoded string
  */
char *rot13(char *str)
{
	char *ptr = str;
	char base;
	int offset = 13;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			base = 'a';
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			base = 'A';
		}

		*str = ((*str - base + offset) % 26) + base;

		str++;
	}
	return (ptr);
}
