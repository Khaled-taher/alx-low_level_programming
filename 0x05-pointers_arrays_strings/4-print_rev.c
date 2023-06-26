#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: pointer to string
 * Return: return nothing
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s);

	while (i > 0)
	{
		_putchar(s[i - 1]);
		i = i - 1;
	}
	_putchar('\n');
}
