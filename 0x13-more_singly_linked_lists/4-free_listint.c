#include "lists.h"

/**
 *free_listint- a function that frees a listint_t list____
 * @head: pointer_____
 * Return: return all_n____
 */

void free_listint(listint_t *head)
{
listint_t *nodee;
while (head)
{
nodee = head;
head = head->next;
free(nodee);
}

}
