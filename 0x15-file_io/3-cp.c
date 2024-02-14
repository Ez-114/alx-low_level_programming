#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close %d\n"

/**
 * cp_file - copies content from one file to another
 * @file_from: file to take text content from
 * @file_to: file to put text content in
 *
 * Return: 1 on Success, -1 on failure
*/
int cp_file(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes = 0;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, ERR_READ, file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, ERR_WRITE, file_to);
		close(fd_from);
		exit(99);
	}

	while ((bytes = read(fd_from, buffer, 1024)) > 0)
		if (write(fd_to, buffer, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_WRITE, file_to), exit(99);

	if (bytes == -1)
		dprintf(STDERR_FILENO, ERR_READ, file_from), exit(98);

	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_from), exit(100);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_to), exit(100);
	return (1);
}

/**
 * main - driver code
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
*/
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_file(av[1], av[2]);
	return (0);
}
