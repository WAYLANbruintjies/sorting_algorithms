#include "sort.h"

/**
 * selection_sort - Sort an array in using Selection sort
 * @size: size of the array
 * @array: list of integers
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, temp, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		min = i;
		flag = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
				flag = flag + 1;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		if (flag != 0)
			print_array(array, size);
	}
}
