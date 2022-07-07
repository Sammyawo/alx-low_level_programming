#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: header of double linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	int p = 0;

	while (h != NULL)
	{
		if (h->prev != NULL && p == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			p = 1;
			i = 0;
		}
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
