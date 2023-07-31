#include "lists.h"

/**
 * insert_nodeint_at_index - concatinate to strings
 * @head: pointer to first element
 * @idx: index of the node to be added in
 * @n: data t be entered
 * Return: return nothing
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned i;
	listint_t *new, *temp = *head;

	if (temp == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *temp;
		*temp = new;
		return (new);
	}

	for (i = 0; i <= idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

		else if (temp->next == NULL)
		{
			free(new);
			return (NULL);
		}

		temp = temp->next;
	}

	return (NULL);
}
