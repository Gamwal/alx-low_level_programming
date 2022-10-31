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

