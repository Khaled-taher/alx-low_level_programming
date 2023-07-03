#include "main.h"

/**
 * _strpbrk - concatinate to strings
 * @s: pointer to area of memory
 * @accept: pointer to accept string
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	while (s[j])
	{
		i = 0;

		while (accept[i])
		{
			if (s[j] == accept[i])
				return (s + j);
			i++;
		}
		j++;
	}
	return (0);
}
