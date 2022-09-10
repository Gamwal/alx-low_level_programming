#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				if (j > i &&
					k > j &&
					i != j &&
					j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
				
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		i++;
		}
	}
	putchar('\n');
	return (0);
}
