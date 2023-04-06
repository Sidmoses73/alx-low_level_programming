#include "main.h"
/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * @letters: the number of letters it should read and print
 * @filename: file
 *
 * Return: Amount of letter it can print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t t, w;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	return (0);
	}

	 buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
	return (0);
	}

	t = read(fd, buf, letters);
	if (t == -1)
	{
	free(buf);
	return (0);
	}

	w = write(STDOUT_FILENO, buf, t);
	if (w == -1)
	{
	free(buf);
	return (0);
	}

	free(buf);
	close(fd);
	return (w);
}
