#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a double linked list
 * @head: header of double linked list
 * @n: number to set in a new node
 * Return: address of a new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *mel, *headcopy;
	*headcopy = head;

	if (head == NULL)
		return (NULL);

	mel = malloc(sizeof(dlistint_t));
	if (mel == NULL)
		return (NULL);

	mel->n = n;
	if (*head == NULL)
	{
		mel->next = NULL;
		mel->prev = NULL;
		*head = mel;
	}
	else
	{
		while (headcopy->next != NULL)
			headcopy = headcopy->next;
		mel->next = NULL;
		mel->prev = headcopy;
		headcopy->next = mel;
	}

	return (mel);
}
