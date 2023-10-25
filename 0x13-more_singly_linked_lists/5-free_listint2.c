#include "lists.h"

/**
 *free_listint2 - a function that frees a listint_t list____
 * @head: pointer_____
 * Return: no return___
 */

void free_listint2(listint_t **head)
{
listint_t *nodee;
listint_t *tal;
if (!head)
return;
nodee = *head;
while (nodee)
{
tal = nodee;
nodee = nodee->next;
free(tal);
}
*head = NULL;
}
