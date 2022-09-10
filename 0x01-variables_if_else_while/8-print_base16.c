#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints z-a using putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char g;

	for (i=0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (g='a'; g <= 'f'; g++)
	{
		putchar(g);
	}
		putchar('\n');

	return (0);
}
