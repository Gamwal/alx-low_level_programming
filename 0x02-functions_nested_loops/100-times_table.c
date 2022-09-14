#include "main.h"

/**
 * print_times_table - prints times table of n
 * @n: number to generate times table
 */

void print_times_table(int n)
{
	int product, i, j;
	
	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			if (n == 0)
				_putchar('0');
			else
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			for (j = 1; j <= n; j++)
			{
				product = i * j;
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product % 100) / 10) + '0');
					_putchar(((product % 100) % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
