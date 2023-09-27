#include "sort.h"

/**
 * counting_sort - Sorts an array of integers in ascending order using the Counting sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void counting_sort(int *array, size_t size)
{
	size_t i, j, max;
	int *count = NULL;

	if (size <= 1)
	{
		return;
	}

	max = 0;

	for (i = 0; i < size; i++)
	{
		if ((size_t)array[i] > max)
		{
			max = (size_t)array[i];
		}
	}
	count = malloc((max + 1) * sizeof(int));
	if (count == NULL)
	{
		return;
	}
	for (i = 0; i <size; i++)
	{
		count[array[i]]++;
	}
	j = 0;
	for(i = 0; i <= max; i++)
	{
		while (count[i] > 0)
		{
			array[j] = i;
			j++;
			count[i]--;
		}
	}
	free (count);
	for (i = 0; i <= max; i++)
	{
		printf("%d", count[i]);
		if (i < max)
		{
			printf(", ");
		}
	}
	printf("\n");
}
