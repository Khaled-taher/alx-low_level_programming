#include "main.h"

/**
 * _strchr - concatinate to strings
 * @s: pointer to area of memory
 * @c: charcter to be found
 * Return: pointer to first occurance of char c
 */
char *_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char) !c)
		return ((char *) &s[i]);
	return (0);
}
