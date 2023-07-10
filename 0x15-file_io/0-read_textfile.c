#include "main.h"
/**
 * read_textfile - Reads a text file and prints to STDOUT
 *
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0;
	char *buffer = NULL;
	ssize_t bn = 0;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	bn = read(file, buffer, letters);
	if (bn <= 0)
	{
		close(file);
		free(buffer);
		return (0);
	}
	buffer[bn] = '\0';
	printf("%s", buffer);
	close(file);
	free(buffer);
	return (bn);
}
