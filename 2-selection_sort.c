#include "sort.h"

/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t index = 0, start = 0, min = 0;

	if (!array || size < 2)
		return;

	while (start < size)
	{
		min = start;
		index = start + 1;
		while (index < size)
		{
			if (array[index] < array[min])
				min = index;
			index++;
		}
		if (min != start)
		{
			array[min] = array[min] ^ array[start];
			array[start] = array[min] ^ array[start];
			array[min] = array[min] ^ array[start];
			print_array(array, size);
		}
		start++;
	}
}
