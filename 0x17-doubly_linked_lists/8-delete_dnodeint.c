#include "lists.h"

/**
 * delete_dnodeint_at_index - concatinate to strings
 * @head: pointer to head of list
 * @index: index to add node at
 *
 * Return: sum of integer in all nodes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	size_t num_node = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		current->next->prev = current->prev;
		free(current);
		return (1);
	}
	while (current->next)
	{
		if (num_node == index)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		num_node++;
	}
	if (num_node == index)
	{
		current->prev->next = current->next;
		return (1);
	}
	return (-1);
}
