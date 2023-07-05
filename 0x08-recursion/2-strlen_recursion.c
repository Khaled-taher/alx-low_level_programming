#include "main.h"

/**
 * _strlen_recursion - concatinate to strings
 * @s: scource taht will be concatinated
 * Return: pointer to destination
 */
int _strlen_recursion(char *s)
{
	if (*(s + 1) != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (1);
}
