#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print an error message and exit with a specific code.
 * @code: The error code to return.
 * @msg: The error message format.
 * @filename: The name of the file related to the error.
 */
void print_error(int code, const char *msg, const char *filename)
{
	dprintf(2, msg, filename);
	exit(code);
}

/**
 * copy_file - Copy the content of one file to another.
 * @from_fd: The file descriptor of the source file.
 * @to_fd: The file descriptor of the destination file.
 */
void copy_file(int from_fd, int to_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	do {
		bytes_read = read(from_fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			print_error(98, "Error: Can't read from file %s\n", strerror(errno));
		}

		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error(99, "Error: Can't write to file %s\n", strerror(errno));
		}
	} while (bytes_read > 0);
}

/**
 * main - Copy the content of one file to another.
 * @argv: The file descriptor of the source file.
 * @argc: The file descriptor of the destination file.
 * Return:return
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	struct stat st;

	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to\n", "");
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (fstat(from_fd, &st) == -1)
	{
		close(from_fd);
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, st.st_mode & 0777);
	if (to_fd == -1)
	{
		close(from_fd);
		print_error(99, "Error: Can't write to file %s\n", argv[2]);
	}
	copy_file(from_fd, to_fd);
	if (close(from_fd) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", argv[1]);
	}
	if (close(to_fd) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", argv[2]);
	}
	return (0);
}
