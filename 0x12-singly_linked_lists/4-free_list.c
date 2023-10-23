#include "lists.h"

/**
 * free_list -a function that frees a list_t list___
 * @head: pointer_____
 * Return: no returns  ______
 */

void free_list(list_t *head)

{
list_t *non;
list_t *kok;

if (!head)
return;
non = head;
while (non)
{
kok = non->next;
free(non->str);
free(non);
non = kok;
}
}
