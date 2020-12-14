#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node
 * description: insert node
 * @h: head
 * @idk: index
 * @n: data
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode;
	dlistint_t *nextPosition;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	for (i = 0; i < idx; i++)
		nextPosition = nextPosition->next;
	newnode->next = nextPosition;
	nextPosition = newnode;
	return(*h);
}
