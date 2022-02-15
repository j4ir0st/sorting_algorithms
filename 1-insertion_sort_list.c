#include "sort.h"
/**
 * insertion_sort_list - generate Insertion sort
 * @list: doubly linkend list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list, *ptr1 = NULL, *ptr2 = NULL, *r = NULL, *l = NULL;

	if (!(list) || !(*list) || ((*list)->prev == NULL && (*list)->next == NULL))
		return;

	while (head)
	{
		ptr1 = head;
		ptr2 = ptr1->next;

		while ((ptr1) && (ptr2) && (ptr1->n > ptr2->n))
		{

			r = ptr2->next;
			l = ptr1->prev;
			ptr1->next = r;
			if (r)
			{
				r->prev = ptr1;
			}
			ptr1->prev = ptr2;
			ptr2->prev = l;
			if (l)
			{
				l->next = ptr2;
			}
			else
			{
				*list = ptr2;
			}
			ptr2->next = ptr1;
			ptr1 = l;
			print_list(*list);
		}
		head = ptr2;
	}
}
