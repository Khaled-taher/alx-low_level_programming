#include "main.h"

/**
 * _puts - print a string
 * @str: pointer to string
 * Return: return nothing
 */
void _puts(char *str)
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
		_putchar(str[i]);
		i = i + 1;
	}
}
