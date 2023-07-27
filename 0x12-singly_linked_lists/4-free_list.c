#include "lists.h"

/**
 * free_list - concatinate to strings
 * @head: pointer to first element
 * Return: return nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
