#include "lists.h"

/**
 * dlistint_len - return the number of elements linked
 * description: elements in a linked list
 * @h: data in node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->n)
			h = h->next;
		x++;
	}
	return (x);
}
