/**
  * rot13 - encodes a string
  * @str: pointer to the passed string
  *
  * Return: encoded string
  */
char *rot13(char *str)
{
	char *ptr = str;
	char in13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"
	int i;

	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == in13[i])
			{
				*s = out13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
