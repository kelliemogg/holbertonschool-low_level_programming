#include "lists.h"

/**
 * free_listint - free
 * description: free node
 * @head: head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	temp = *head;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			temp = current->next;
			free(temp);
			temp = current;
		}
		*head = NULL;
	}
}
