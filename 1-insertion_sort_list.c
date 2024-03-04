#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in 
 * ascending order using the Insertion sort algorithm
 * @list: the list to compute
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *newnode;

	if (list == NULL || (*list)->next == NULL)
		return;
	newnode = (*list)->next;
	while (newnode != NULL)
	{
		while ((newnode->prev) && (newnode->prev->n > newnode->n))
		{
			newnode = swap_node(newnode, list);
			print_list(*list);
		}
		newnode = newnode->next;
	}
}

/**
 *swap_node - Swap two nodes
 *@node: node
 *@list: list
 *Return: pointer of the current node
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *old = node->prev, *current = node;

	old->next = current->next;
	if (current->next)
		current->next->prev = old;
	current->next = old;
	current->prev = old->prev;
	old->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
