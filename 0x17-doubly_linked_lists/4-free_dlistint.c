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

	while (head != NULL)
	{
		freedom->next = freedom;
		free(freedom);
		freedom->next = freedom;
	}
	free(head);
}
