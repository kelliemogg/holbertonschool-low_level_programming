#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint - list_t
 * description: list elements
 * @h: points to list
 * Return: num of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			h = h->next;
		}
		else if (h->str == NULL)
			printf("[0] (nil)\n");
		count++;
	}
	return (count);
}
