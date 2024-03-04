#include "sort.h"

/**
 * swap - Swap two integer values
 * @a: first int
 * @b: second int
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Partition an array using pivot
 * @array: array of ints
 * @low: lowest int value
 * @high: highest int value
 * @size: size of the array
 * Return: pivot position/index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int x, y;
	
	x = low - 1;
	for (y = low; y <= high; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			if (x != y)
			{
				swap(&array[x], &array[y]);
				print_array(array, size);
			}
		}
	}
	return (x);
}

/**
 * lomuto_qsort - Sorting an array recursively
 * @array: array to be computed
 * @low: lowest int value
 * @high: highest int value
 * @size: size of the array
 * Return: void
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		lomuto_qsort(array, low, i - 1, size);
		lomuto_qsort(array, i + 1, high, size);
	}
}

/**
 * quick_sort - Quick sort algorithme using lomuto partition
 * @array: array
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
