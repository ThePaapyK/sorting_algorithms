#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: list to be sorted
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cur_node = NULL, *prev_node = NULL, *next = NULL;

	if (!list || !(*list))
		return;
	cur_node = (*list)->next;
	while (cur_node)
	{
		next = cur_node->next;
		prev_node = cur_node->prev;

		while (prev_node && (cur_node->n < prev_node->n))
		{
			prev_node->next = cur_node->next;
			if (cur_node->next)
				(cur_node->next)->prev = prev_node;
			cur_node->prev = prev_node->prev;
			cur_node->next = prev_node;
			if (prev_node->prev)
				(prev_node->prev)->next = cur_node;
			else
				*list = cur_node;
			prev_node->prev = cur_node;
			prev_node = cur_node->prev;
			print_list(*list);
		}
		cur_node = next;
	}
}
