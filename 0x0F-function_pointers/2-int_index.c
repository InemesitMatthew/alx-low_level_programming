#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array of integers to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: The index of the first matching element, or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (1);
		}
	}
	return (-1);
}
