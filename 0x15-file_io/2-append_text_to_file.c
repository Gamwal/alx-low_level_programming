#include "main.h"

/**
 * append_text_to_file - fuction that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to be written
 *
 * Return: 1 on success or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, count = 0;
	ssize_t fw;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fo = open(filename, O_WRONLY | O_APPEND);

	fw = write(fo, text_content, count);

	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);

	return (1);
}
