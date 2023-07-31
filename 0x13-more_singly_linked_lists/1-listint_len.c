#include "lists.h"

/**
 * listint_len - count numbers of elements
 * @h: pointer to list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
