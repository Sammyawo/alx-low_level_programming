#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 *
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t men;
men = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h-> next;
men++;
}
return (men);

}
