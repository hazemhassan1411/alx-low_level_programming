#include "lists.h"

/**
 * add_node-a function adds a new node at the beginning of a list_t list.
 * @head: pointer_____
 *@str:string_______
 * Return: returns kok ______
 */

list_t *add_node(list_t **head, const char *str)

{
list_t *kok = malloc(sizeof(list_t));

if (!head || !kok)
{
return (NULL);
}
if (str)
{
kok->str = strdup(str);
if (!kok->str)
{
free(kok);
return (NULL);
}
kok->len = strlen(kok->str);
}
kok->next = *head;
*head = kok;
return (kok);
}
