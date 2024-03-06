#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order using the Shell sort
 * @array: array of integers
 * @size: size of the array
 *
 * Description: use the Knuth sequence (n + 1 = n * 3 + 1)
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	unsigned int gap, i, j;
	int temp;

	gap = 1;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j = j - gap;
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
