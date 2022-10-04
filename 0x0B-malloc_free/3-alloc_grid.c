#include "main.h"

/**
 * alloc_grid - program returns a pointer to 2 dimensional array
 *           of integers
 * @width: width of the 2-dimensional array
 * @height: height of the 2-dimensional array
 *
 * Return: NULL if width <= 0 or height <= 0, or the function fails
 *         else, a pointer to the 2-dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **arrayxy;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrayxy = malloc(sizeof(int *) * height);

	if (arrayxy == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		arrayxy[h_index] = malloc(sizeof(int) * width);

		if (arrayxy[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(arrayxy[h_index]);

			free(arrayxy);
			return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			arrayxy[h_index][w_index] = 0;
	}

	return (arrayxy);
}
