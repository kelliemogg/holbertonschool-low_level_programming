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
	dlistint_t *ptr;

	ptr = (dlistint_t *)h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		x++;
	}
	return (x);
}
