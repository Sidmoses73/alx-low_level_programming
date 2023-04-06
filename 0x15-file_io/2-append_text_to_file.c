#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: name of file
 * @text_content: String to add to the end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int fb, bytes_written, text_len;

	if (filename == NULL)
	{
		return (-1);
	}
	fb = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0644);
	if (fb == -1)
	{
		return (-1);
	}
	text_len = strlen(text_content);
	bytes_written = write(fb, text_content, text_len);
	if (bytes_written == -1 || bytes_written != text_len)
	{
		close(fb);
		return (-1);
	}
	close(fb);

	return (1);
}
