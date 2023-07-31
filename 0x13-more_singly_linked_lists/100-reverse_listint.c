#include "lists.h"

/**
 * reverse_listint - concatinate to strings
 * @head: pointer to first element
 * Return: return nothing
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *curr = *head;

	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	(*head) = prev;
	return (*head);
}	
