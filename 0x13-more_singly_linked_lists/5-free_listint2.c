#include "lists.h"
/**
 * free_listint2 - it is a func t o free
 * @head: it is a pointer
 * Return: return
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *t;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		t = node;
		node = node->next;
		free(t);
	}
	*head = NULL;
}
