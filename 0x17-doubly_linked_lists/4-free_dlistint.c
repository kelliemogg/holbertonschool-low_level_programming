#include "lists.h"

/**
 * free_dlistint - freedom
 * description: free the whole list
 * @head: head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freedom, *tail;

	if (head == NULL)
		return;

		tail = head;
	while (tail->next != NULL)
		tail = tail->next;
	if (tail == NULL)
		tail->prev = tail;
	freedom = tail;
	free(freedom);
	}
}
