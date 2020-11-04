#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - list_t
 * description: list elements
 * @h: points to list
 * Return: num of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
