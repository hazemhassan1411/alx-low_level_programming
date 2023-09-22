#include "lists.h"
/**
 * add_node - it is a func
 * @head: it is apointer
 * @str: it is apointr
 * Return: return
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->next = *head;

	*head = new_node;

	return new_node;
}
