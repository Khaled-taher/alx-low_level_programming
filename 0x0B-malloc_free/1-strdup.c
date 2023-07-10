#include "main.h"

/**
 * _strdup - concatinate to strings
 * @str: destination to concatinate after
 * Return: pointer to destination
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size = 0;
	char *str2;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	str2 = malloc(sizeof(char) * size);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str2[i] = str[i];

	return (str2);

}
