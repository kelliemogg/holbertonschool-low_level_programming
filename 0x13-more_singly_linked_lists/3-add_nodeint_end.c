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
	listint_t *endnode;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);

	endnode->n = n;
	*head = NULL;
	*head = endnode;
	endnode->next = *head;
	*head = endnode;
	return (endnode);
}
