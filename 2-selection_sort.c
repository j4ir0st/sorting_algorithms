#include "sort.h"

/**
 * selection_sort - Entry point
 * @array: pointer to the array
 * @size: size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, minor = 0;
	int tmp = 0;

	for (i = 0; i < size - 1; i++)
	{
		minor = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minor])
			{
				minor = j;
			}
		}
		if (minor != i)
		{
			tmp = array[i];
			array[i] = array[minor];
			array[minor] = tmp;
			print_array(array, size);
		}
	}
}
