#include "main.h"

/**
 * _strstr - concatinate to strings
 * @haystack: pointer to area of memory
 * @needle: pointer to string
 * Return: pointer to s
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);

}
