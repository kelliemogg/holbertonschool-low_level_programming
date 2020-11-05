#include "lists.h"

/**
 * free_listint - free
 * description: free node
 * @head: head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		current->next = current;
		if (current == NULL)
			free(current);
	}
	free(head);
	return;
}
