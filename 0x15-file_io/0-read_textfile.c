#include "main.h"

/**
 * read_textfile - it is func
 * @filename:it is pointer
 * @letters: it is pointer
 * Return: return byte
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t byte;

	char buf[BUF_SIZE * 8];

	if (!filename || !letters)
	return (0);

	filed = open(filename, O_RDONLY);
	if (filed == -1)
	return (0);

	byte = read(filed, &buf[0], letters);
	byte = write(STDOUT_FILENO, &buf[0], byte);
	close(filed);
	return (byte);
}
