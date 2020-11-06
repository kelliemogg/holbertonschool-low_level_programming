#include "lists.h"

/**
 * get_nodeint_at_index - ugh
 * description: list elements
 * @h: points to list
 * Return: num of elements
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = h;
	unsigned int itr = 0;

	while (!h)
	{
		h = h->next;
		itr++;
	}
	if (index > itr)
		return (NULL);
	for (itr = 0; head != NULL && itr <index; itr++)
	{
		head = head->next;
	}
	return (head);
}
