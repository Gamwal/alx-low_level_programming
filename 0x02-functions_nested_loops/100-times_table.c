#include "main.h"

/**
 * print_times_table - prints the times table of an integer starting with zero
 * @n: Number to use
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int x, y, product;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				product = x * y;
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (y == 0)
				{
					_putchar('0');
				}
				else if (product >= 10)
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if ((product < 10) && (y != 0))
				{
					_putchar(' ');
					_putchar((product % 10) + '0');
				}
				else if (prod >= 100)
				{
					_putchar((prod / 100) + 0);
					_putchar((prod / 10) % 10 + 0);
				}
			}
			_putchar('\n');
		}
	}
}
