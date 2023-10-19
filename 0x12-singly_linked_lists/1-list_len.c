#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		node_count++;
		current_node = current_node->next;
	}

	return (node_count);
}
