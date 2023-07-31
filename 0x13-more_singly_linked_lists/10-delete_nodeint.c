#include "lists.h"

/**
 * insert_nodeint_at_index - concatinate to strings
 * @head: pointer to first element
 * @idx: index of the node to be added in
 * Return: return nothing
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned i;
	listint_t *temp = *head, *temp2;

	if (temp == NULL)
		return (-1);

	if (index ==0)
	{
		*head = temp->next;
		free (temp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (i == index - 1)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free (temp2);
			return (1);
		}

		else if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	return (-1);
}
