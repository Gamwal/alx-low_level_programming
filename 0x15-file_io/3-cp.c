#include "main.h"

/**
 * copycopy - functions that copies content of a file to another file
 *
 *
 *
 * Return: 1
 */

int copycopy(const char *filename1, *filename2)
{
	int i, fo1, fo2;
	char *buf[1024];
	ssize_t fr, fw;

	fo1 = open(filename1, O_RDONLY);

	fr1 = read(filename1, buf, 1024);

	fo2 = open(filename2, O_CREAT | O_RDWR | O_TRUNC, 00600);

	fw = write(filename2, buf, 1024);

	while ( != EOF)
	{
		fo2 = open(filename2, O_APPEND | O_RDWR);
		fw = write(filename

	for (i = 0; i < 1025; i++)



