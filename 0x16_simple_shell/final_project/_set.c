#include "main.h"

/**
 * _setenv - to set value of new variable or modify it 
 * @environ: pointer to environment variables
 * @name: name of variable to set
 * @value: value to be set
 * @overwrite: if not 0 then overwrite old value
 * Return: return 0 if sucessed and -1 in fail
 */
int _setenv(char **environ, const char *name, const char *value, int overwrite)
{
	char *str; 
	int name_len, val_len, i = 0, j;
	char **new_environ = NULL;

	name_len = _strlen(name);
	val_len = _strlen(value);

	while (environ[i] != NULL)
	{
		str = _strndup(environ[i], len);
		if (_strcmp(name, str) == 0 && environ[i][name_len] == '=')
			break;
		i++;
	}

	if (environ[i] == NULL)
	{
		return (_setenv_helper1(environ, name, value, new_environ, i));
	}
	else 
	{
		if (overwrite != 0)
		{
			return (_setenv_helper2(environ, name, value, new_environ, i));
		}
		return (0);
	}
	return (-1);
}

/**
 * _setenv_helper1 - to set value of new variable or modify it
 * @environ: pointer to environment variables
 * @name: name of variable to set
 * @value: value to be set
 * @overwrite: if not 0 then overwrite old value
 * @new_environ: pointer to new environment after edit
 * @j: index of current node
 * Return: return 0 if sucessed and -1 in fail
 */
void _setenv_helper1(char **environ, const char *name, const char *value, char **new_environ, int j)
{
	int i = 0, name_len, val_len;
	
	name_len = _strlen(name);
	val_len = _strlen(value);

	new_environ = malloc(sizeof(char *) * (i + 2));
	if (new_environ == NULL)
	{
		perror("Error:");
		return (-1);
	}
	
	for (i = 0; i < j; i++)
		new_environ[i] = _strdup(environ[i]);
	
	new_environ[i] = malloc(sizeof(char) * (len + val_len + 2));
	if (new_environ[i] == NULL)
	{
		perror("Error:");
		return (-1);
        }

	for (j = 0; j < len; j++)
		new_environ[i][j] = name[j];

	new_environ[i][j] = '=';
	for (j = len + 1; j < (len + val_len + 1); j++)
                        new_environ[i][j] = value[j - len - 1];
	
	new_environ[i][j] = '\0';
	new_environ[i+1] = NULL;
	environ = new_environ;
	return (0);
}

/**
 * _setenv_helper2 - to set value of new variable or modify it
 * @environ: pointer to environment variables
 * @name: name of variable to set
 * @value: value to be set
 * @overwrite: if not 0 then overwrite old value
 * @new_environ: pointer to new environment after edit
 * @j: index of current node
 * Return: return 0 if sucessed and -1 in fail
 */
void _setenv_helper2(char **environ, const char *name, const char *value, char **new_environ, int j)
{
	int i = 0, name_len, val_len;
	
	name_len = _strlen(name);
	val_len = _strlen(value);

	while (environ[i])
		i++;
	
	new_environ = malloc(sizeof(char *) * (j + 1));
	if (new_environ == NULL)
		perror("Error:");
	
	for (i = 0; i < j; i++)
		new_environ[i] = _strdup(environ[i]);
	
	new_environ[i] = malloc(sizeof(char) * (len + val_len + 2));
	if (new_environ[i] == NULL)
	{
		perror("Error:");
		return (-1);
	}
	for (j = 0; j < len; j++)
		new_environ[i][j] = name[j];

	new_environ[i][j] = '=';
	for (j = len + 1; j < (len + val_len + 1); j++)
		new_environ[i][j] = value[j - len - 1];
	
	new_environ[i][j] = '\0';
	i++;

	while (environ[i])
	{
		new_environ[i] = _strdup(environ[i]);
		i++;
	}
	new_environ[i] = NULL;
	environ = new_environ;
	return (0);
}
