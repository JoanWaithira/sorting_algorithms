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
	size_t j = 0;
	int temp;
	int swapped;

	for (; i < size - 1; i++)
	{
		swapped = 0;

		for (; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}


