#include "main.h"

/**
 * str_concat - concatinate to strings
 * @s1: destination to concatinate after
 * @s2: scource taht will be concatinated
 * Return: pointer to destination
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int size1 = 0, size2 = 0;
	char *str;

	if (!(s1 == NULL))
		while (s1[size1])
			size1++;

	if (!(s2 == NULL))
		while (s2[size2])
			size2++;

	str = malloc(sizeof(char) * (size1 + size2));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		str[i] = s1[i];

	for (i = 0; i < size2; i++)
		str[size1 + i] = s2[i];

	return (str);
}
