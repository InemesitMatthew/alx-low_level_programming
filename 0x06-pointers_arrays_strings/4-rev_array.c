#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	/* Loop through half of the array */
	for (i = 0; i < n / 2; i++)
	{
		/* Swap elements from both ends of the array */
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
