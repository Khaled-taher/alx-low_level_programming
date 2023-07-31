#include "lists.h"

/**
 * free_listint - concatinate to strings
 * @head: pointer to first element
 * Return: return nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
