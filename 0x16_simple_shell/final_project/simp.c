#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pid;
	int status;
	char **argv, **command;
	char *lineptr;
	size_t n;

	while (1)
	{
		printf("#cisfun$ ");
		if (getline(&lineptr, &n, stdin) == -1)
		{
			perror("error:");
			continue;
		}
		command = get_argv(lineptr);
		if (argv == NULL)
		{
			continue;
		}
		pid = fork();
		if (pid < 0)
		{
			perror("Error:");
			continue;
		}
		if (pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
			return (0);
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}
