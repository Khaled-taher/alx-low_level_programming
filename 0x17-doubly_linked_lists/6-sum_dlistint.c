#include "lists.h"

/**
 * sum_dlistint - concatinate to strings
 * @head: pointer to head of list
 *
 * Return: sum of integer in all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
