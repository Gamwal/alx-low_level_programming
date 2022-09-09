/* This is a programme that uses puts to output a message to CLI */
#include <stdio.h>
#include <string.h>

/**
 *main - Prints a 52 character statement
 *
 * Return: 0
 */

int main(void)
{
	char str1[52];

	strcpy(str1, "Programming is like building a mulitlingual puzzle\n");
	puts(str1);
	return (0);
}
