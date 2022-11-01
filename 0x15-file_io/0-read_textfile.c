#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * 		standard output
 * @filename: pointer to the file
 * @letters: numbers of letters to read and print
 *
 * Return: actual number of letters read and printed, or
 * 		0 if filename == NULL, or
 * 		if file cannot be opened or read, or
 * 		if write fails or does not write the expected
 * 		number of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	ssize_t fr, fw;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	fr = read(fo, buf, letters);
	fw = write(STDOUT_FILENO, buf, fr);

	if (fo == -1 || fr == -1 || fw == -1 || fr != fw)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fo);
	return (fw);
}
