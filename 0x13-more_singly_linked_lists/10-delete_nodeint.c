#include "lists.h"

/**
 *delete_nodeint_at_index-a funcn deletes node at index index of a listint_t_
 * @head: pointer_____
 * @index:var unsigned_____
 * Return: no return___
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *nodee;
listint_t *all_n;
unsigned int frs = 0;

if ((!head) || (!*head))
return (-1);
if (!index)
{
nodee = *head;
*head = (*head)->next;
free(nodee);
return (1);
}
nodee = *head;
while (nodee)
{
if (frs == index)
{
all_n->next = nodee->next;
free(nodee);
return (1);
}
frs++;
all_n = nodee;
nodee = nodee->next;
}
return (-1);
}
