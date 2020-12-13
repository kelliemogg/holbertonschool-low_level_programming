#include "lists.h"

/**
 * add_dnodeint_end - add node
 * description: adds a node at the end of a list
 * @head: first node
 * @n: data for new node
 * Return: address or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endnode;
	dlistint_t *tail;

	endnode = malloc(sizeof(dlistint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	if (*head == NULL)
		*head = endnode;
	else
	{
		tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = endnode;
	endnode->prev = tail;
	endnode->next = NULL;
	endnode = tail;
	}
	return (endnode);
}
