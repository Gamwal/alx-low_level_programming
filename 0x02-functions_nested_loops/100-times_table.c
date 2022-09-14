#include "main.h"

/**
 * print_times_table - nultiplication table
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				_putchar(i*j);
				
				int c=0;

				if (c < n)
					_putchar(', ');
				else
					_putchar('\n');
			}
		}
	}
}
