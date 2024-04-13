/**
  * _strcat - concatenates two strings
  * @dest: original string
  * @src: string to be added to dest
  *
  * Return: dest as pointer
  */

char *_strcat(char *dest, char *src)
{
	/* get the len of dest */
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	/* cpy from src to dest */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}
