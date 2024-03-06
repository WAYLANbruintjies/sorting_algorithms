# include "sort.h"

/**
 * swap - Switch/swap two values
 * @a: first value
 * @b: second value
 * Return: void
 */
void swap(listint_t **a, listint_t **b) {
    int temp = (*a)->n;
    (*a)->n = (*b)->n;
    (*b)->n = temp;
}

/**
 * cocktail_sort_list - Sorts a doubly linked list using Cocktail shaker sort
 * @list: the list to be computed
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	int switched;
	listint_t *node, *tmp;

	switched = 0;
	if (list == NULL || *list == NULL)
		return;
	for (node = *list; node->next != NULL; node = node->next)
	{
		if (node->n > node->n->next)
		{
			swap(&node, &(node->next));
			switched = 1;
			tmp = *list;
			while (tmp != NULL)
			{
				print_list(list);
				tmp = tmp->next;
			}
		}
	}
	if (!switched)
		break;
	switched = 0;
	for (node = node->prev; node != NULL; node = node->prev)
	{
		if (node->n > node->next->n)
		{
			swap(&node, &(node->next));
			switched = 1;
			tmp = *list;
			print_list(list);
			tmp = tmp->next;
		}
	} while (switched);
}
