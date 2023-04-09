#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);


#define BUFFER_SIZE 1024

/**
 * create_buffer - Allocates memory for the buffer.
 * @file: The name of the file.
 *
 * Return: A pointer to the buffer.
 */
char *create_buffer(char *file __attribute__((unused)))
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptor.
 * @fd: The file descriptor to be closed.
 *
 * Return: 0 on success, or -1 on error.
 */
int close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (-1);
	}

	return (0);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	ssize_t bytes_read;
	char *buffer;
	int from_fd;
	int to_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	buffer = create_buffer(argv[0]);

	from_fd = open(argv[1], O_RDONLY);

	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		return (98);
	}

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close_file(from_fd);
		return (99);
	}

	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)

	{
		if (write(to_fd, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close_file(from_fd);
			close_file(to_fd);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close_file(from_fd);
		close_file(to_fd);
		return (98);
	}

	free(buffer);

	if (close_file(from_fd) == -1 || close_file(to_fd) == -1)
	{
		return (100);
	}

	return (0);
}
