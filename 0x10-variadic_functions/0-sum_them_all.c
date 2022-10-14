#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments passed
 *
 * Return: Sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	var_list ap;
	int sum = 0;

	va_start (ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg (ap, unsigned int);

	va_end (ap);
	return sum;
}
