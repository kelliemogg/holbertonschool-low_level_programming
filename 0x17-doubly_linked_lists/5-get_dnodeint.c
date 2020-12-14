#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node
 * description: returns nth node
 * @head: head of list
 * @index: itr
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int itr = 0;

	while (h != NULL)
	{
		h = h->next;
		itr++;
	}
	if (index > itr)
		return (NULL);
	for (itr = 0; head != NULL && itr < index; itr++)
	{
		head = head->next;
	}
	return (head);
}
