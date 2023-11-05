/**
  * isDelimiter - check if the current char is one of the delimiters
  * @s: passed character
  *
  * Return: true or false
  */
int isDelimiter(char s)
{
	int i;
	char d[] = " \t\n,;.!?\"{}()";

	for (i = 0; i <= 13; i++)
		if (s == d[i])
			return (1);
	return (0);
}

/**
  * isLower - check if current char is lower case
  * @s: passed char
  *
  * Return: true or false
  */
int isLower(char s)
{
	return (s >= 'a' && s <= 'z');
}

/**
  * cap_string - caps the first letter of each word in a string
  * @str: pointer to the passed string
  *
  * Return: capitalized string
  */
char *cap_string(char *str)
{
	char *ptr = str;
	int delim = 1;

	while (*str != '\0')
	{
		if (isDelimiter(*str))
			delim = 1;
		else if (isLower(*str) && delim)
		{
			*str -= 32;
			delim = 0;
		}
		else
			delim = 0;

		str++;
	}
	return (ptr);
}
