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
	char b{BUF_size * 8};

	if (!filename || !letters)
	return (0);

	filed = open(filename, O_RDONLY);
	if (filed == -1)
	return (0);

	byte = read(filed, &b[0], letters);
	byte = write(STDOUT_FILENO, &b[0], byte);
	close(filed);
	return (byte);
}
