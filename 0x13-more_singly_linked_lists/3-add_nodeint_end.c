#include "lists.h"

/**
 * add_nodeint_end - that add on the linked list
 * @head: the pointer of pointer to listint_t
 * @n: the data of linked listt
 * Return: returns the address of new pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = *head;
listint_t *last = malloc(sizeof(listint_t));
if (!last)
return (NULL);
last->n = n;
last->next = NULL;
if (*head == NULL)
{
*head = last;
return (last);
}
while (temp->next)
temp = temp->next;
temp->next = last;
return (last);
}
