#include "lists.h"

/**
 * free_listint - free
 * description: free node
 * @head: head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		current->next = current;
		if (current == NULL)
			free(current);
		*head = NULL;
	}
	free(head);
	return;
}
