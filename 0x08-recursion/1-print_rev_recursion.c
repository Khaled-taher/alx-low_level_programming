#include "main.h"

/**
 * _print_rev_recursion - concatinate to strings
 * @s: scource taht will be concatinated
 * Return: pointer to destination
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
