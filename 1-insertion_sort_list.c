#include "sort.h"
/**
 * insertion_sort_list - generate Insertion sort
 * @list: doubly linkend list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	int i;
	int count;
	int currentval;
	int j;
	int k;
	listint_t *tmp;

	if (list == NULL)
		return (NULL);

	while (list[i]->next != NULL)
	{
		count++;
		i++;	
	}
	for (j = 0; i < count; j++)
	{
		currentval = list[j]->n;
		k = j - 1;
		while (k >= 0 && list[k]->n > currentval)
		{
			list[k + 1]->n = list[k]->n;
			
		}
		
	}	
}
