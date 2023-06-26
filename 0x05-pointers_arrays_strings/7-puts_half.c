#include "main.h"

/**
 * puts_half - print a string
 * @str: pointer to string
 * Return: return nothing
 */
void puts_half(char *str)
{
	int i;

	i = strlen(str);

	if (i % 2 == 0)
		i = i / 2;
	else
		i = i / 2 + 1;
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
