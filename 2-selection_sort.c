#include "sort.h"

/**
 * selection_sort - function that sorts an array
 *@size:  size of array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, idx;
	int temp, min;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (idx = i + 1; idx < size; idx++)
		{
			if (array[min] > array[idx])
			{
				min = idx;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}
