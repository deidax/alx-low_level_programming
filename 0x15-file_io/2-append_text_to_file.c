#include "main.h"
/**
 * append_text_to_file - Append new text to file
 * @filename: File name
 * @text_content: Text content to append
 *
 * Return : 1 if its ok -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_result;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
