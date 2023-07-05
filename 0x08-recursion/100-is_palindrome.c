#include "main.h"

/**
 * is_equal - comare first and last character
 * @s: pointer to string
 * @l: length og string
 * Return: return 1 if equals and 0 if not
 */
int is_equal(char *s, int l)
{
	if (l <= 1)
		return (1);
	if (*s == *(s + l - 1))
		return (is_equal(s + 1, l - 2));
	else
		return (0);
}

/**
 * is_palindrome - print the string
 * @s: pointer to string
 * Return: pointer to destination
 */
int is_palindrome(char *s)
{
	int l;

	if (*s == '\0')
		return (1);

	l = strlen(s);

	return (is_equal(s, l));
}

