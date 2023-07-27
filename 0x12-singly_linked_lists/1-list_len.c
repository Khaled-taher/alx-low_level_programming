#include "lists.h"

/**
 * list_len - count numbers of elements
 * @h: pointer to list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}

