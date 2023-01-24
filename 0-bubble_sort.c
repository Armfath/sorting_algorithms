#include "sort.h"

/**
 * bubble_sort - bubble sorting
 *
 * @array: array that will sort
 * @size: size of the array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	int i, j, temp;

	for (i = 0; i < (int) size - 1; i++)
	{
		for (j = 0; j < (int) size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
