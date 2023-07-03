#include "main.h"

/**
 * inCharSet - concatinate to strings
 * @c: pointer to area of memory
 * @accept: pointer to accept string
 * Return: pointer to s
 */
int inCharSet(char c, char *accept)
{
	int i = 0;

	while (accept[i])
	{
		if (c == accept[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strspn - concatinate to strings
 * @s: pointer to area of memory
 * @accept: pointer to accept string
 * Return: pointer to s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] && inCharSet(s[i], accept))
		i++;

	return (i);
}
