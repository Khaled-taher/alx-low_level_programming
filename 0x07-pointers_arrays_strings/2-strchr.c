#include "main.h"

/**
 * _strchr - concatinate to strings
 * @s: pointer to area of memory
 * @c: charcter to be found
 * Return: pointer to first occurance of char c
 */
char *_strchr(char *s, char c)
{
	unsigned int i  = 0;

	while (s[i] != c)
		i++;

	if (i == strlen(s))
		return (NULL);
	else
		return (s + i);
}
