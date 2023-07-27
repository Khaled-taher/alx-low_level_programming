#include "lists.h"

/**
 * list_len - count numbers of elements
 * @h: pointer to list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (_list_len(h, 0));
}

/**
 * _list_len - help to calculate the counts
 * @h: pointer to list
 * @n: number of ele
 * Return: number of elemet
 */
int _list_len(const list_t *h, int n)
{
	n = n + 1;

	if (h->next == NULL)
		return (n);
	else
		return (_list_len(h->next, n));
}

