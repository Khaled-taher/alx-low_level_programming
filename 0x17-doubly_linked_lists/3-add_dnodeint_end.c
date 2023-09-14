#include "lists.h"

/**
 * add_dnodeint_end - concatinate to strings
 * @head: pointer to head of list
 * @n: integer to be added
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

        if (head == NULL)
        {
                return (NULL);
        }
	current = *head;

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
		while (current->next)
		{
			current = current->next;
		}
                new->prev = current;
                new->next = NULL;
                current->next = new;
        }
        return (new);

}
