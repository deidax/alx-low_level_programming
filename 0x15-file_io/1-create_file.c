#include "main.h"
/**
 * create_file - Task 1
 * @filename: File name
 * @text_content: Text content
 *
 * Return: 1 if ok -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int file, write_result, perm;

	if (filename == NULL)
		return (-1);
	perm = S_IRUSR | S_IWUSR;
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, perm);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_result = write(file, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
