#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked
 * list of integers in ascending order using the
 * Insertion sort algorithm
 * @list: List to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list;
	int sorted;

	sorted = 0;
	if (!list || !(*list))
	return;

	while (!sorted)
	{
		sorted = 1;
		tmp = *list;
		while(tmp)
		{
			if (tmp->next)
			if (tmp->n > tmp->next->n)
			{
				sorted = 0;
				swap(tmp, tmp->next, list);
				print_list(*list);
				tmp = tmp->prev;
				while (tmp)
				{
					if (tmp->prev)
					if (tmp->n < tmp->prev->n)
					{
						swap(tmp->prev, tmp, list);
						print_list(*list);
					}
					tmp = tmp->prev;
				}
			}
			if(tmp)
			tmp = tmp->next;
		}
	}
	
}


/**
 * swap - function that swaps 2 nodes
 * @first: first nodes
 * @sec: second node
 * @list: List head
 */
void swap(listint_t *first, listint_t *sec, listint_t **list)
{
	listint_t *tmp;

	if (first->prev)
	first->prev->next = sec;
	else
	*list = sec;
	if (sec->next)
	sec->next->prev = first;
	tmp = first->next;
	first->next = sec->next;
	sec->next = first;
	tmp = first->prev;
	first->prev = sec;
	sec->prev = tmp;

}
