#include "lists.h"

/**
 * sum_listint - concatinate to strings
 * @head: pointer to first element
 * Return: return nothing
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);


	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	free(temp);
	return (sum);

}
