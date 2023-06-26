#include "main.h"

/**
 * puts_half - print a string
 * @str: pointer to string
 * Return: return nothing
 */
void puts_half(char *str)
{
	int i;

	i = strlen(str) / 2 + 1;

	while (1)
	{
		if (str[i - 1] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i - 1]);
		i = i + 1;
	}
}
