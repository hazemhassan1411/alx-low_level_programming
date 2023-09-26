#include "lists.h"
/**
 * get_nodeint_at_index - it is func
 * @head: it is a pointer
 * @index:it is integr
 * Return: return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int j = 0;

	for (node = head; node && j < index; node = node->next, j++)
		;
	return (node);
}
