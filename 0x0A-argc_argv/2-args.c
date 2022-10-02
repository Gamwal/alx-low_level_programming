#include <stdio.h>
#include <stdlib.h>

/**
 * main - program body
 * @argc: argc variable
 * @argv: argv variable
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
