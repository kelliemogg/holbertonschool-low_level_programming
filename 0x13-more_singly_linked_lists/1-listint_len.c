#include "lists.h"

/**
 * listint_len - length
 * description: return number of elements
 * @h: pointer to list
 * Return: numb of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->n)
		h = h->next;
		count++;
	}
	return (count);
}
