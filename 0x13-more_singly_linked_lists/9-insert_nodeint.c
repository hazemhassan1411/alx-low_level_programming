#include "lists.h"
/**
 * insert_nodeint_at_index - it is func
 * @head: it is pointer
 * @n: it isint
 * @idx: it is
 * Return:returm
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *n_node = malloc(sizeof(listint_t));
	unsigned int j = 0;

	if (!head || !n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (!idx)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	node = *head;
	while (node)
	{
		if (j == idx - 1)
		{
			n_node->next = node->next;
			node->next = n_node;
			return (n_node);
		}
		j++;
		node = node->next;
	}
	free(n_node);
	return (NULL);
}
