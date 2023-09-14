#include "lists.h"

/**
 * print_dlistint - concatinate to strings
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
