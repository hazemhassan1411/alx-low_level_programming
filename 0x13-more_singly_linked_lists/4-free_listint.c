#include "lists.h"
/**
 * free_listint - it is a func to  free
 * @head: it is a pointer
 * Return: free
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
