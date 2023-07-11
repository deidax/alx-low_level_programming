#include "main.h"
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1024
#endif
/**
 * error_exit - error handling
 * @error: Error text
 * @exit_code: Error code
 *
 * Return: void
 */
void error_exit(const char *error, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", error);
	exit(exit_code);
}
/**
 * cp_file - copy file to a new file
 * @file_from: source file name
 * @file_to: desination file
 *
 * Return: void
 */
void cp_file(const char *file_from, const char *file_to)
{
	int from, to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	from = open(file_from, O_RDONLY);
	if (from < 0)
		error_exit("Can't read from file", 98);
	to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to < 0)
		error_exit("Can't write to file", 99);
	while ((bytes_read = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit("Can't write to file", 99);
	}
	if (bytes_read < 0)
		error_exit("Can't read from file", 98);
	if (close(from) < 0)
		error_exit("Can't close fd", 100);
	if (close(to) < 0)
		error_exit("Can't close fd", 100);
}
/**
 * main - program entry point
 * @argc: arg count, should be 3
 * @argv: arg vectors
 *
 * Return: 0 if success 97 if not
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	cp_file(argv[1], argv[2]);
	return (0);
}
