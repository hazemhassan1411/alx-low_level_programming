#include "lists.h"

/**
 *sum_listint-a func returns nth node of a listint_t linked list__
 * @head: pointer_____
 * Return: no return___
 */

int sum_listint(listint_t *head)
{
int nodee = 0;
while (head)
{
nodee += head->n;
head = head->next;
}
return (nodee);
}
