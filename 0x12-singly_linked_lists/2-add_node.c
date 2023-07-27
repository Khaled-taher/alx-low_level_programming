#include "lists.h"

/**
 * add_node - concatinate to strings
 * @head: pointer to first element
 * @str: string to be writen in the element
 * Return: address to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0';  i++)
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
