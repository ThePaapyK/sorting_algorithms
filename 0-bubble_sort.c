#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int k, n;

	k = 0;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		n = k;
		for (j = 0; j < size - 1; j++)
		if (array[j] > array[j + 1])
		{
			array[j] = array[j] ^ array[j + 1];
			array[j + 1] = array[j] ^ array[j + 1];
			array[j] = array[j] ^ array[j + 1];
			print_array(array, size);
			k++;
		}
		if (k == n)
			return;
	}
}
