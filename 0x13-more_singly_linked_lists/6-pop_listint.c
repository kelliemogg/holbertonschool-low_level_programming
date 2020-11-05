#include "lists.h"

/**
 * pop_listint - pop
 * description: deletes the head node
 * @head: ptr to ptr
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int x;

	if (*head == NULL)
		return (0);

	x = *head->n;
	newnode = *head;
	*head = *head->next;
	free(newnode);
	return (x);
}
