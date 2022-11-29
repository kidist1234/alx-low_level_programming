#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
if (h->n)
printf("%d \n", h->n);
else
printf("(nil)\n");
h = h->next;
i++;
}
return (i);
}
