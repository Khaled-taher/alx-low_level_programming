#include "main.h"

/**
 * _cpy_environ - to get a copy of environment
 * @environ: pointer to environment variables
 * Return: return pointer to dyn alloc environ
 */
char **_cpy_environ(char **environ)
{
	int i = 0, len == 0;
	char **new_environ = NULL;

	while (environ[len] != NULL)
	{
		len++;
	}
	len++;

	new_environ = malloc(sizeof(char *) * len);
	if (new_environ == NULL)
	{
		perror("Error:");
		return (NULL);
	}

	while (environ[i] != NULL)
	{
		new_environ[i] = _strdup(environ[i]);
		i++;
	}
	new_environ[i] = NULL;
	environ = new_environ;
	return (environ);
}

/**
 * _free_environ - to set value of new variable or modify it
 * @environ: pointer to environment variables
 *
 * Return: nothing
 */
void _free_environ(char **environ)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		free(environ[i]);
		i++;
	}
	free(environ);
	environ == NULL;
}
