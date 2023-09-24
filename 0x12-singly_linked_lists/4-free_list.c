#include "lists.h"
/**
 * free_list - it is afunc
 * @head: it is pointer
 * Return: return
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
	list_t *current = head;

	head = head->next;

	free(current->str);
	free(current);
	}
}