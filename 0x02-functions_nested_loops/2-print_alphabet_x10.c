#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: This program prints a-z 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
