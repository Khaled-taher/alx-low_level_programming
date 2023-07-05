#include "main.h"

/**
 * _puts_recursion - print the string
 * @s: pointer to string
 * Return: pointer to destination
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
