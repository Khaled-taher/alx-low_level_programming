#include "main.h"

/**
 * puts2 - print a string
 * @str: pointer to string
 * Return: return nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (1)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
			_putchar(str[i]);
		i = i + 1;
	}
}
