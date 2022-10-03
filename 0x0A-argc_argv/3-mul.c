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
	int i, j, k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	k = i * j;
	printf("%d\n", k);
	return (0);
}
