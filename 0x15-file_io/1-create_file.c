#include "main.h"

/**
 * create_file - Function to creat a file
 * @filename: Name of file to create
 * @text_content: terminated string
 *
 * Return: 1 0n success, -1 return NULL
 */

int create_file(const char *filename, char *text_content)

{
	int fb, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fb == -1)
	{
		perror("open");
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(fb, text_content, len);
		if (w == -1)
		{
			perror("write");
			close(fb);
			return (-1);
		}
	}
	if (close(fb) == -1)
	{
		perror("close");
		return (-1);
	}
	return (1);
}
