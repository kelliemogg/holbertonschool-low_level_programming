#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print list
 * description: prints all the elements of a list
 * @h: ptr
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str != NULL)
		{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		}
		else if (h->str == NULL)
			printf("[0] (nil)\n");
		x++;
	}
	return(x);
}
