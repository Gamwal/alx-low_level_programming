#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: number of times _ should be printed
 *
 * Return: void.
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
