#include "lists.h"

/**
 * pop_listint - concatinate to strings
 * @head: pointer to first element
 * Return: return nothing
 */
int pop_listint(listint_t **head)
{
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;

	(*head) = (*head)->next;

	return (i);
}
