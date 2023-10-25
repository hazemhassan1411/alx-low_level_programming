#include "lists.h"
/**
 *add_nodeint- a func adds a new node at beginning of a listint_t list_
 * @head: pointer
 * @n: var
 * Return: return
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *all_n = malloc(sizeof(listint_t));

	if ((!head) || (!all_n))
		return (NULL);
	all_n->next = NULL;
	all_n->n = n;
	if (*head)
	all_n->next = *head;
	*head = all_n;
	return (all_n);
}
