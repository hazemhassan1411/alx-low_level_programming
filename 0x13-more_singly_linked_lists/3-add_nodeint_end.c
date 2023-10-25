#include "lists.h"

/**
 *add_nodeint_end- a function adds a new node at end of a listint_t list_
 * @head: pointer
 * @n: var
 * Return: return
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *all_n = malloc(sizeof(listint_t));
listint_t *nodee;

if ((!head) || (!all_n))
return (NULL);
all_n->next = NULL;
all_n->n = n;
if (!*head)
*head = all_n;
else
{
nodee = *head;
while (nodee->next)
nodee = nodee->next;
nodee->next = all_n;
}
return (all_n);
}
