#include "lists.h"

/**
 * get_nodeint_at_index - concatinate to strings
 * @head: pointer to first element
 * @index: index of node to be gotten
 * Return: return nothing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	temp = head;
	if (head == NULL)
		return (NULL);

	for (i = 0; i <= index; i++)
	{
		if (i == index)
			return (head);

		else if (temp->next == NULL)
			return (NULL);

		head = head->next;
	}

	return (NULL);
}
