#include "sort.h"

/**
 * cambio - genetate a change
 * @n1: int
 * @n2: int
 * Return: nothing
 */

void cambio(size_t *n1, size_t *n2)
{
	size_t tmp = *n1;

	*n1 = *n2;
	*n2 = tmp;
}

/**
 * bubble_sort - genetate a sort bubble
 * @array: int
 * @size: size_t
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL)
		printf("empty array");

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				cambio(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
