#include "lists.h"

/**
 * add_dnodeint - add a new node
 * description: add to beginning of list
 * @head: head of list
 * @n: data in node
 * Return: address or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = (*head);
	if (*head != NULL)
		(*head)->prev = newnode;
	newnode->prev = NULL;
	(*head) = newnode;
	return (newnode);
}
