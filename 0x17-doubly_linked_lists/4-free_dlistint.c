#include "lists.h"

/**
 * free_dlistint - concatinate to strings
 * @head: pointer to head of list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
