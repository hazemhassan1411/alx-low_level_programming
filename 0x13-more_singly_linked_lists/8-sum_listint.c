#include "lists.h"
/**
 * sum_listint - it is a func
 * @head: it ia pointer
 * Return: return sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
