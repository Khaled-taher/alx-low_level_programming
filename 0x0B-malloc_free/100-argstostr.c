#include "main.h"

/**
 * argstostr - concatinate to strings
 * @ac: destination to concatinate after
 * @av: scource taht will be concatinated
 * Return: pointer to destination
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, index = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			j++;

		size = size + j + 1;
	}

	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index] = av[i][j];
			index = index + 1;
		}
		str[index] = '\n';
		index = index + 1;
	}
	str[index] = '\0';

	return (str);
}
