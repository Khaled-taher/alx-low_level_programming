#include "main.h"

/**
 * print_array - print a string
 * @a: pointer to string
 * @n: number of element to print
 * Return: return nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n;  i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
			continue;
		}
		printf(", %d", a[i]);
	}
	putchar('\n');
}
