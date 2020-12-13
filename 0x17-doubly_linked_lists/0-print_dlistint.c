#include "lists.h"

/**
 * print_dlistint - print all the elements
 * description: from a list
 * @h: data for new node
 * Return: num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->n)
			printf("%i\n", h->n);
		h = h->next;
		x++;
		else
			return (0);
	}
	return (x);
}
