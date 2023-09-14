#include "lists.h"

/**
 * insert_dnodeint_at_index - concatinate to strings
 * @h: pointer to head of list
 * @idx: index to add node at
 * @n: integer to be added in new node
 *
 * Return: sum of integer in all nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	size_t num_node = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current = *h;
	while (current)
	{
		if (idx == num_node)
		{
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		current = current->next;
		num_node++;
	}
	if (num_node == idx)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	return (NULL);

}
