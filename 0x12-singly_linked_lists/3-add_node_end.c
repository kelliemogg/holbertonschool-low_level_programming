#include "lists.h"
#include <string.h>

/**
 * add_node_end -add it
 * description: add a node
 * @head: head
 * @str: str
 * Return: n_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *n_node, *tail;

	n_node = malloc(sizeof(list_t));
	if(n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	while(str[count])
		count++;

	n_node->len = count;
	if (*head == NULL)
		*head = n_node;
	else
	{
		tail = *head;
	while (tail->next != NULL)
		tail = tail->next;

	tail->next = n_node;
	}
	return(n_node);
}
