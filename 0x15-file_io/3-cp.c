#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define ERR_CLOSE "Error: Can't close %d\n"

/**
 * copy_contents - copy the content from one file to another
 * @fd_from: file descriptor of source file
 * @fd_to: file descriptor of destination file
 *
 * Return: 1 on success
*/
int copy_contents(int fd_from, int fd_to)
{
	ssize_t bytes_read = 0, bytes_write = 0;
	char *buffer = NULL;

	/* allocate space to the buffer */
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Buffer allocation failure.\n");
		close(fd_from);
		close(fd_to);
		exit(101);
	}

	/* read from file_from 1024 byte and write them to file_to */
	do {
		bytes_read = read(fd_from, buffer, sizeof(buffer));
		bytes_write = write(fd_to, buffer, bytes_read);

		/* error handling */
		if (bytes_write != bytes_read || bytes_read == -1 || bytes_write == -1)
		{
			free(buffer);
			return (100);
		}

	} while (bytes_read > 0);

	free(buffer);
	return (1);
}

/**
 * cp_file - copies content from one file to another
 * @file_from: file to take text content from
 * @file_to: file to put text content in
 *
 * Return: 1 on Success, -1 on failure
*/
int cp_file(char *file_from, char *file_to)
{
	/* init variables */
	int fd_from, fd_to, r_val;

	/* check for files */
	if (file_from == NULL || file_to == NULL)
		return (-1);

	/* try open file_from */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/* try open file_to */
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99);
	}

	r_val = copy_contents(fd_from, fd_to);
	if (r_val == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		close(fd_to);
		exit(100);
	}

	/* On success close files and free buffer */
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_from), exit(100);
	if (fd_to)
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
