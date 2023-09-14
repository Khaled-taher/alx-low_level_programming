#include "lists.h"

/**
 * add_dnodeint - concatinate to strings
 * @head: pointer to head of list
 * @n: integer to be added
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
