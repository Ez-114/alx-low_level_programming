#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* _strlen - return the length of a given string
* @s: array of characters
* Return: the number of characters inside an array of characters
*/

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (*s++)
		i++;

	return (i);
}

/**
* create_file - creates a file
* @filename: file name
* @text_content: content to put in the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, bytes = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	len = _strlen(text_content);
	if (len != 0)
		bytes = write(fd, text_content, len);
	close(fd);

	if (bytes == len)
		return (1);
	return (-1);
}
