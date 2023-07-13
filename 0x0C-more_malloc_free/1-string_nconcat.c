#include "main.h"

/**
 * _strlen - find length of str
 * @str: pointer to string
 * Return: return the length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	if (str == NULL)
		return (0);
	else
		return (i);
}

/**
 * string_nconcat - concatinate to strings
 * @s1: destination to concatinate after
 * @s2: second string
 * @n: integer number
 * Return: pointer to destination
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_1, len_2;
	char *str;

	len_1 = _strlen(s1);
	len_2 = strlen(s2);

	if (n < len_2)
		len_2 = n;

	str = malloc(sizeof(char) * (len_1 + len_2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		str[i] = s1[i];

	for (i = 0; i < len_2; i++)
		str[len_1 + i] = s2[i];

	str[len_1 + i] = '\0';

	return (str);
}
