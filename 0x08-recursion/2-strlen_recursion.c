/**
 * _strlen_recursion - get the length of the string
 * @s: string
 *
 * Return: length of the string
*/
int _strlen_recursion(char *s) /* hello */
{
	if (s[0] != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
