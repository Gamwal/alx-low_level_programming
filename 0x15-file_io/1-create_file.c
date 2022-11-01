#include "main.h"
#include <stdio.h>

/**
 * create_file - fuction that creates a file
 * @filename: name of the file to be created
 * @text_content: file content
 *
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fo, count;
	ssize_t fw;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	fw = write(fo, text_content, count);

	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);

	return (1);
}
