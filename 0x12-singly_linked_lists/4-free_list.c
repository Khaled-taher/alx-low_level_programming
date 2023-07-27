#include "lists.h"

/**
 * free_list - concatinate to strings
 * @head: pointer to first element
 * Return: return nothing
 */
void free_list(list_t *head)
{
	list_t *curr, *nx;

	curr = head;
	if (curr->next != NULL)
	{
		nx = curr->next;
		free_list(nx);
	}
	free(curr);

}
