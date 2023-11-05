/**
  * string_toupper - changes lower cases to upper cases
  * @str: pointer to passed string
  *
  * Return: @str converted to upper case
  */

char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = 'A' + (*str - 'a');
		}

		str++;
	}

	return (str);
}
