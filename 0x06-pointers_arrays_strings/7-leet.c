/**
  * leet - encodes a string into 1337
  * @str: pointer to the passed string
  *
  * Example leet("Hello") --> H3110
  * Return: encoded string
  */
char *leet(char *str)
{
	char *ptr = str;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	if (*str == "")
	{
		return (ptr);
	}

	while (*str != '0')
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*str == key[i] || *str == key[i] + 32)
			{
				*str = 48 + val[i];
			}
		}
		str++;
	}
	return (ptr);
}

