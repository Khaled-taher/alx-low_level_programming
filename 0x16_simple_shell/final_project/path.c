#include "main"

/**
 * build_path - build linked list of paths
 * @head: pointer pointed to first node
 * @path: pointer pointed to path varaible
 * Return: pointer to first node of path
 */
list_t *build_path(list_t **head, char *path)
{
	char *token, *path_dup;
	list_t *new, *last;

	path_dup = _strdup(path);
	token = strtok(path_dup, ":");
	while (token != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			printf("Error!!");
		}
		new->str = _strdup(token);
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			last = *head;
			while (last->next)
				last = last->next;
			last->next = new;
		}
		token = strtok(NULL, ":");
	}
	free(path_dup);
	return (*head);
}

/**
 * _getenv - get value associated with variable named
 * @environ: pointer to environment variables
 * @name: name of varaible
 * Return: return pointer pointed to value of name
 */
char *_getenv(char **environ, char *name)
{
	int len = 0;
	char *value;

	len = _strlen(name);
	while (environ[i] != NULL)
	{
		value = _strndup(environ[i], len);
		if (_strcmp(name, value) == 0 && environ[i][len] == '=')
			break;
		i++;
	}
	free(value);
	j = len + 1;
	while (environ[i][j] != '\0')
	{
		j++;
	}
	j = j - len;
	value = malloc(sizeof(char) * j);
	if (value == NULL)
	{
		printf("Error:");
		return (NULL);
	}
	j = len + 1;
	while (environ[i][j] != '\0')
	{
		value[j - len - 1] = environ[i][j];
		j++;
	}
	value[j - len - 1] = '\0';
	return (value);
}
