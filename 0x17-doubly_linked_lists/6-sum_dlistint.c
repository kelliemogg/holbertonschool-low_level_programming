#include "lists.h"

/**
 * sum_dlistint - returns sum of data
 * description: sum of all data (n) of a linked list
 * @head: first node
 * Return: sum of data or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
		sum += head->n;
	        head = head->next;
	        sum += head->n;
	return (sum);
}
