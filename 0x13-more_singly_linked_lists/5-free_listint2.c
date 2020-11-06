#include "lists.h"

/**
 * free_listint2 - free
 * description: free node
 * @head: head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current = 0;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
		}
		*head = NULL;
	}
}
