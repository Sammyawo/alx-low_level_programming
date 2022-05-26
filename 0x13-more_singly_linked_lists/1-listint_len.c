#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return the  number of elements in a linked list
 *
 * @h: linked list of type listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t men;
men = 0;
while (h != NULL)
{
h = h -> next;
men++;
}
return (men);

}
