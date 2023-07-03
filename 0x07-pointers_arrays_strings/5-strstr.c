#include "main.h"

/**
 * _strstr - concatinate to strings
 * @haystack: pointer to area of memory
 * @needle: pointer to string
 * Return: pointer to s
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, l;

	l = strlen(needle);

	while (haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;

		i++;

		if (j == l)
			return (haystack + i - l);
	}

	return (0);
}
