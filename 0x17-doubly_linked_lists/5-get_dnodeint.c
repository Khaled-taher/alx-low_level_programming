#include "lists.h"

/**
 * get_doneint_at_index - concatinate to strings
 * @head: pointer to head of list
 * @index: index to get its pointer
 *
 * Return: pointer to certain nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t num_node = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (num_node == index)
		{
			return (head);
		}
		head = head->next;
		num_node += 1;
	}
	return (NULL);
}
