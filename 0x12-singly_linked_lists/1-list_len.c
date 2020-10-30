#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - list_t
 * description: func to return number of elements in a linked list
 * @h: points to list
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			h = h->next;
		}
		else if (h->str == NULL)
			printf("[0] (nil)\n");
		x++;
	}
	return(x);
}
