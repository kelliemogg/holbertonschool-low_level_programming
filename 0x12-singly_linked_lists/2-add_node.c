#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node
 * description: adds a new node
 * @head: head
 * @str: string
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
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
	return (x);
}
