#include <stdio.h>
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted
 *                  array of integers using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 * Return: -1 if value or array is NULL
*/

size_t min(size_t a, size_t b)
{
    if (a < b)
        return (a);
    else if (a > b)
        return (b);
    else
        return (a);
}

int jump_search(int *array, size_t size, int value)
{
    size_t index, step;

    index = 0;
    step = sqrt(size);
    
    while (array[min(step, size) - 1] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", index, array[index]);
        index = step;
        step = step + sqrt(size);
        if (index >= size)
            return (-1);
    }
    while (array[index] < value)
    {
        printf("Value checked arrays[%ld] = [%d]\n", index, array[index]);
        index = index + 1;
        if (index == min(step, size))
            return (-1);
    }
    if (array[index] == value)
        return (index);
    return (-1);
}

