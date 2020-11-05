#include "lists.h"

/**
 * add_nodeint_end - node to end
 * description: add node
 * @head: head
 * @n: const
 * Return: address or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *endnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (*head == NULL)
		*head = newnode;
	else
	{
		endnode = *head;
		while (endnode->next != NULL)
			endnode = endnode->next;

		endnode->next = newnode;
	}
	return (newnode);
}
