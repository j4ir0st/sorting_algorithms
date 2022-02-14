#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*Prints an array of integers*/
void print_array(const int *array, size_t size);

/*Prints a list of integers*/
void print_list(const listint_t *list);

/*our methods*/
void change_p(int n1, int n2);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

#endif
