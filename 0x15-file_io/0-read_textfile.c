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
	ssize_t fd = open(filename, O_RDONLY);
	size_t l = 0; /* actuall read and printed letters */
	char buffer[1024];

	if (fd == -1 || filename == NULL || letters == 0)
		return (0);

	l = read(fd, buffer, letters);
	l = write(STDOUT_FILENO, buffer, l);

	close(fd);
	return (l);
}
