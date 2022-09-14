#include "main.h"

/**
 * print_times_table - prints times table of n
 * @n: number to generate times table
 */

void print_times_table(int n)
{
	int product, x, y;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				product = x * y;

				if (product < 10)
				{
					_putchar(' ');
				}
				else if (product < 100)
				{
					_putchar(' ');
				}

				if (product >= 100)
				{
					_putchar(product / 100 + '0');
					_putchar((product / 10) & 10 + '0');
				}
				else if (product < 100 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar(product % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
