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
	char letter[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int number[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int i;

	while (*str != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*str == letter[i])
			{
				*str = number[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
