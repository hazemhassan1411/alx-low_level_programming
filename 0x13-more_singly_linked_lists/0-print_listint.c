#include "lists.h"
/**
 * print_listint - it is a func
 * @h: it is a var
 * Return: return
 */
size_t print_listint(const listint_t *h)
{
	size_t f = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		f++;
	}
	return (f);
}
