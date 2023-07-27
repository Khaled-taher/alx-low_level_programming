#include "lists.h"

/**
 * print_list - concatinate to strings
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{

	if (h == NULL)
	{
		printf("Error");
		return (0);
	}
	return (print_ele(h, 0));
}

/**
 * print_ele - function to print element and count them
 * @h: pointer to list
 * @n: number of ele
 * Return: number of elemet
 */
int print_ele(const list_t *h, int n)
{
	n = n + 1;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	if (h->next == NULL)
		return (n);
	else
		return (print_ele(h->next, n));

}
