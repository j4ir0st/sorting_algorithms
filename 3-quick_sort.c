#include "sort.h"

/**
 * quick_sort - Entry point
 * @array: array to sort
 * @size: size of the array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	handler(array, 0, size, size);
}

/**
 * handler - Entry point
 * @a: array to sort
 * @star: start of the array
 * @end: end of the array
 * @size: size of the array
 * Return: Nothing
 */

void handler(int *a, int start, int end, size_t size)
{
	int idx = 0;

	if (end <= start)
		return;
	idx = lomuto(a, start, end, size);
	if (start != idx)
		handler(a, 0, idx, size);
	handler(a, idx + 1, end, size);
}

/**
 * lomuto - Entry point
 * @a: array to sort
 * @star: start of the array
 * @end: end of the array
 * @size: size of the array
 * Return: Nothing
 */

int lomuto(int *a, int start, int end, int size)
{
	int i = 0, j = 0, tmp = 0, flag = 0, save = 0;
	int pivot = a[end - 1];

	for (i = start; i < end; i++)
	{
		if (a[i] > pivot)
		{
			for (j = i + 1; j < end; j++)
			{
				if (j == end - 1)
				{
					flag = -1;
					save = i;
				}
				if (a[j] <= pivot)
				{
					tmp = a[j];
					a[j] = a[i];
					a[i] = tmp;
					break;
				}
			}
			print_array(a, size);
			if (flag == -1)
				break;
		}
	}
	if (flag == 0)
		return (end - 1);
	return (save);
}
