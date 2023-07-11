#include <stdio.h>
#include <math.h>

/**
 * binary_search - function that searches for a value in a sorted
 *                  array of integers using the Binry search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 * Return: -1 if value or array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;
	int m;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		m = floor((left + right) / 2);
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}
return (-1);
}
