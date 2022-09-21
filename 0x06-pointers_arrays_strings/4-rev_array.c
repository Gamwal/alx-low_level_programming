#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, k, *b;

	b = a;

	for (i = 1; i < n; i++)
	{
		b++;
	}
	for (j = 0; j < i / 2; j++)
	{
		k = a[j];
		a[j] = *b;
		*b = k;
		b--;
	}
}
