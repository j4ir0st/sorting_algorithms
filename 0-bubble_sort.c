#include "sort.h"

/**
 * bubble_sort - genetate a sort bubble
 * @array: int
 * @size: size_t
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
