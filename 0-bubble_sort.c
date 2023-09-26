#include "sort.h"

/**
 * bubble_sort - A function that sorts an array of integers in ascending order
 *
 * @array: The array to be sorted
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t len = size;
	int tmp;
	bool swapped = false;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (swapped == false)
	{
		swapped = true;
		for (; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swapped = false;
			}
		}
		len--;
	}
}
