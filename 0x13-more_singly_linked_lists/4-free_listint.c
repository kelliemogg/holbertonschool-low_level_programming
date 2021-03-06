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
		free(current);
		current->next = current;
	}
	free(head);
}
