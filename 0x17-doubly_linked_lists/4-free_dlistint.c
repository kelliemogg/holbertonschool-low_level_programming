#include "lists.h"

/**
 * free_dlistint - freedom
 * description: free the whole list
 * @head: head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freedom;

	if (head == NULL)
		return;
	else
	{
		freedom = head;
		head = head->next;
		free(freedom);
		freedom = freedom->next;
	}
	free(head);
}
