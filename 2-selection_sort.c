#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: Te size of the array
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i;
	size_t j;
	size_t min_idx;

	if (array == NULL || size <= 1)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
			if (min_idx != i)
			{
				temp = array[i];
				array[i] = array[min_idx];
				array[min_idx] = temp;
				print_array(array, size);
			}
		}
	}
}
