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
	unsigned int i = 0;

	if (*head == NULL || !head)
		return (-1);
	find = *head;
	while (i < index)
	{
		if (i == index && find->prev != NULL)
		{
			find->prev->next = find->next;
			find->next->prev = find->prev;
			free(find);
			return (1);
		}
		else if (i == index && find->prev == NULL)
		{
			find->next->prev = NULL;
			free(find);
			return (1);
		}
		else
			find = find->next;
		i++;
	}
	return (1);
}
