#include "main.h"

/**
 * create_file - it is func
 * @filename:it is pointer
 * @text_content: it is pointer
 * Return: return byte
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;

	if (filename == NULL)
	{
		return (-1);
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	}
	else if (fd == -1)
		return (-1);

	else if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		close(fd);

		if (bytes_written == -1)
			return (-1);
	}
	else
	{
		close(fd);
	}

	return (1);
}
