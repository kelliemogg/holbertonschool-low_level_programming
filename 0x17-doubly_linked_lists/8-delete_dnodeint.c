#include "lists.h"

/**
 * delete_dnodeint_at_index - delete it
 * description: dlt at a node
 * @head: head of list
 * @index: index in list
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *find;
	unsigned int i;

	if (*head == NULL || !head)
		return (-1);
	find = *head;
	while (i < index)
	{
		if (find->next == NULL)
			return (-1);

		find = find->next;
		if (i == index)
		{
			find->prev->next = find->next;
			find->next->prev = find->prev;
			free(find);
		}
		i++;
	}
	return (1);
}
