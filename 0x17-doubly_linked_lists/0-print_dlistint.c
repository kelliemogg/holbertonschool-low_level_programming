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
	dlistint_t *ptr;

	ptr = (dlistint_t *)h;
	while (ptr != NULL)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
		x++;
	}
	return (x);
}
