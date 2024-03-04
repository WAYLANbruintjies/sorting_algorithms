#include "sort.h"
#include <stddef.h>

/**
 * swap_ints - Swap two integers in an array
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: void
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order\
 * using the Bubble sort algorithm
 * @array: pointer to the array of integers
 * @size: size of the array
 *
 * Description: Print array after each swap
 *
 * Return: void
 */ 
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if(array[j] > array[j+1])
			{
				swap_ints(array + j, array + j + 1);
				print_array(array, size);
			}
		}
	}
}
