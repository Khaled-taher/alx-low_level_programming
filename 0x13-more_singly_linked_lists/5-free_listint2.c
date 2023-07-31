#include "lists.h"

/**
 * free_listint2 - concatinate to strings
 * @head: pointer to first element
 * Return: return nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *start;

	start = *head;

	while (start)
	{
		tmp = start;
		start = start->next;
		free(tmp);

	}

	*head = NULL;
}
