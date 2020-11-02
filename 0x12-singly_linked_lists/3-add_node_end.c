#include "lists.h"
#include <strings.h>
/**
 * add_node_end -add it
 * description:
 * return: yup
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *n_node, *tail;

	n_node = malloc(sizeof(list_t));
	if(n_node == NULL)
		return (null);
	n_node->str = strdup(str);

	while(str[count] != NULL)
		count++;
	n_node->len = count;

	if (*head == NULL)
		*head = n_node;
	else
	{
		tail = *head;
	while (tail->next != NULL)
		tail = tail->next;

	tail_n->next = n_node;
	}
return(n_node);
}
