#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node
 * description: insert node
 * @h: head
 * @idx: index
 * @n: data
 * Return: newnode
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int idx, i = 0;
	dlistint_t *newnode, *tp, *find;

	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}
	if (h == NULL)
		return (NULL);
	find = *h;
	while (i < idx)
	{
		if (find->next == NULL && (i + 1) != idx)

		{ return (NULL); }
		else if (find->next == NULL)
		{
			newnode = add_dnodeint_end(h, n);
			return (newnode);
		}
		else
		{
			find = find->next;
			i++;
		}
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	tp = find->prev;
	newnode->next = find;
	tp->next = newnode;
	find->prev = newnode;
	newnode->prev = tp;
	return (newnode);
}
