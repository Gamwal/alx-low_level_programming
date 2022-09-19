#include "main.h"

/**
 * swap_int - function that sways two integer
 * @a: integer 1
 * @b: integer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
