#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node
 * description: adds a new node
 * @head: head
 * @str: string
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int x = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		;
	newnode->len = x;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
