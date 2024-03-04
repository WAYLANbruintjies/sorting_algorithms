#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order \
 * using the Bubble sort algorithm
 * @array: pointer to the array of integers
 * @size: size of the array
 * Return: void
 */ 
void bubble_sort(int *array, size_t size)
{
	int temp;

	for (i = 0; i < array.length - 1; i++)
	{
		for(j = 0; j < array.length -i -1; j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
