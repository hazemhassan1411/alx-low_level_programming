#include "lists.h"

/**
 *get_nodeint_at_index-a func returns nth node of a listint_t linked list__
 * @head: pointer_____
 * @index: int var____
 * Return: no return___
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nodee;
unsigned int n;

for (nodee = head, n = 0; nodee && n < index; nodee = nodee->next, n++)
;
return (nodee);
}
