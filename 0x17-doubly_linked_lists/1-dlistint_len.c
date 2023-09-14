#include "lists.h"

/**
 * dlistint_len - concatinate to strings
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes += 1;
		h = h->next;
	}
	return (num_nodes);
}
