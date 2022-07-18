#include "sort.h"
/**
 * bubble_sort - function that sorts a doubly linked
 * list of integers in ascending order using the
 * Insertion sort algorithm
 * @list: List to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t tmp = *list;
	int sorted;

	sorted = 0;
	if (!list || !(*list))
	return

	while (!sorted)
	{
		sorted = 1;
		while(tmp)
		{
			if (tmp->n > tmp->next->n)
			{
				sorted = 0;
				swap(tmp->n, tmp->next->n);
				print_list(*list);
				tmp = tmp->prev;
				while (tmp)
				{
					if (tmp->n < tmp->prev->n)
					{
						swap(tmp->n, tmp->prev->n);
						print_list(*list);
					}
					tmp = tmp->prev;
				}
			}
			tmp = tmp->next;
		}
	}
	
}


/**
 * swap - function that swaps 2 nodes
 * @first: first nodes
 * @sec: second node
 */
void swap(listint_t first, listint_t sec)
{
	listint_t tmp;

	tmp = first->next;
	first->next = sec->next;
	sec->next = tmp;
	tmp = first->prev;
	first->prev = sec->prev;
	sec->prev = tmp;
}