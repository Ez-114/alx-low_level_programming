#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* read_textfile - reads a text file and prints it to POSIX stdout
* @filename: the name of the file
* @letters: the number of letters it should read and print
*
* Return: the actual number of letters it could read and print,
* (0) if the file cannot be opened or read, if filename is NULL, or
* write fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t l = 0, r = 0;
	char *buffer;

	if (filename == NULL || letters <= 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	l = read(fd, buffer, letters);
	r = write(STDOUT_FILENO, buffer, l);
	close(fd);
	free(buffer);

	return (r);
}
