#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list_t list to be freed
 */
void free_listint(listint_t *head)

{

listint_t *temporary;
while (head)
{
temporary = head->next;
free(head);
head = temporary;
}
}
