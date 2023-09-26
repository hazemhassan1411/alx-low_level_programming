#include "lists.h"
/**
 * pop_listint - it is a func
 * @head: it is a pointer
 * Return: return
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int j;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	j = (*head)->n;
	free(*head);
	*head = node;
	return (j);
}
