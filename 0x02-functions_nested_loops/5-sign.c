#include "main.h"

/**
 * print_sign - check polarity
 * @n: number to be checked
 *
 * Description: Checks polarity and prints out the sign
 *
 * Return: 1 for +ve, 0 for 0 & -1 for -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
