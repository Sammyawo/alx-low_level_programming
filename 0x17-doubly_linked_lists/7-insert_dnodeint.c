#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: header of double linked list
 * @idx: index of the node, starting from 0
 * @n: is a given number
 * Return: a address of nth node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mel, *headcopy = *h;
	unsigned int i;

	mel = malloc(sizeof(dlistint_t));
	if (mel == NULL)
		return (NULL);

	mel->n = n;
	while (headcopy != NULL && headcopy->prev != NULL)
	{
		headcopy = headcopy->prev;
		*h = (*h)->prev;
	}

	if (idx == 0)
	{
		free(mel);
		return (add_dnodeint.c(h, n));
	}

	for (i = 0; (i < idx - 1) && headcopy != NULL; i++)
		headcopy = headcopy->next;

	if (headcopy == NULL)
	{
		free(mel);
		return (NULL);
	}
	if (headcopy->next == NULL)
	{
		mel->next = NULL;
		mel->prev = headcopy;
		headcopy->next = mel;
	}
	else
	{
		mel->next = headcopy->next;
		mel->prev = headcopy;
		headcopy->next->prev = mel;
		headcopy->next = mel;
	}

	return (mel);
}
