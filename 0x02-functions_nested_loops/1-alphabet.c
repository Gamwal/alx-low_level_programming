#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program prints a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z');
	{
		_putchar(ch);
		ch++;
		if (ch == 'z');
		{
			_putchar('\n')
		}
	}
	return (0)
}
