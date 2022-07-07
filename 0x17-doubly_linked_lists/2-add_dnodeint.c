#include "lists.h"

/**
 * add_dnodeint - add a node at the begining of a double linked list
 * @head: header of double linked list
 * @n: number to set in a new node
 * Return: address of a new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *mel;

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
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
		(*head)->prev = mel;
		mel->next = *head;
		mel->prev = NULL;
		*head = mel;
	}

	return (*head);
}
