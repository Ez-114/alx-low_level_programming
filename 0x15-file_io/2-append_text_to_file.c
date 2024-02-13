#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* _strlen - return the length of a given string
* @s: array of characters
* Return: the number of characters inside an array of characters
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}

	return (i);
}

/**
* append_text_to_file - appends text to the end of a file
* @filename: the name of the file
* @text_content: the text to put inside the file
*
* Return: 1 success, -1 fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes, len;

	if (filename == NULL)
		return (-1);

	/* attemp to open the file */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* now append */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	bytes = write(fd, text_content, len);

	close(fd);
	if (bytes != len)
		return (-1);
	return (1);
}
