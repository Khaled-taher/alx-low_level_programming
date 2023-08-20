#include "main.h"

/**
 * _setenv - to set value of new variable or modify it 
 * @environ: pointer to environment variables
 * @name: name of variable to set
 * Return: return 0 if sucessed and -1 in fail
 */
int _unsetenv(char **environ, const char *name)
{
	char *str; 
	int len, i = 0, j;
	char **new_environ = NULL;

	len = _strlen(name);
	while (environ[i] != NULL)
	{
		str = _strndup(environ[i], len);
		if (_strcmp(name, str) == 0 && environ[i][len] == '=')
			break;
		i++;
	}

	if (environ[i] == NULL)
	{
		return (0);
	}
	else 
	{
		j = 0;
		while (environ[j])
			j++;
		new_environ = malloc(sizeof(char *) * j);
		if (new_environ == NULL)
		{
			perror("Error:");
			return (-1);
		}
		j = i;
		i = 0;
		for (i = 0; i < j; i++)
			new_environ[i] = strdup(environ[i]);
		for (i = j + 1; environ[i]; i++)
			new_environ[i - 1] = environ[i];
		new_environ[i - 1] = NULL;
		environ = new_environ;
		return (0);
	}
	return (-1);
}
