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
	int *min;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *min)
			{
				min = array + j;
			}
			if (min != array + i)
			{
				temp = array[i];
				array[i] = *min;
				*min = temp;
				print_array(array, size);
			}
		}
	}
}

