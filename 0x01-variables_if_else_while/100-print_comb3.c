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

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (j > i && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
