#include "lists.h"


/**
 * add_node_end -a function adds a new node at the end of a list_t list.
 * @head: pointer
 * @str: string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *kok = malloc(sizeof(list_t));
list_t *non;

if (!head || !kok)
return (NULL);

kok->str = strdup(str);
if (!kok->str)
{
free(kok);
return (NULL);
}

kok->len = strlen(kok->str);
kok->next = NULL;

if (*head == NULL)
{
*head = kok;
}
else
{
non = *head;
while (non->next != NULL)
{
non = non->next;
}
non->next = kok;
}
return (kok);
}
