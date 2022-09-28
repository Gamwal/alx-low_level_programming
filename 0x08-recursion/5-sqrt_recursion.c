#include "main.h"

/**
 * root_finder - checks natural square root of a number
 * @n: number
 * @i: iteration of root to check
 *
 * Return: Natural square root or -1 if no natural root
 */

int root_finder(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i == n / 2)
		return (-1);

	return (root_finder(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: number
 *
 * Return: Natural root or -1 if n isn't a perfect square
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (root_finder(n, i));
}
