#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>


/**
 * struct list_s - it is a struct
 * @str: str point to certain path
 * @next: pointer to next node
 */
typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

char **get_argv(char *lineptr);
int get_argv_helper(char *lineptr, int *arg_num, int *char_num);
char **get_command(char *lineptr, int *command_num);
void get_command_helper(char *lineptr, int *command_num, int *error);
int get_command_helper2(char *lineptr, int *error, int i);
void helper_error(char **command, int *command_num);
char *_strdup(char *str);
char *_strndup(char *str, int n);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
list_t *build_path(list_t **head, char *path);
char *_getenv(char **environ, char *name);
int _setenv(char **environ, const char *name,
		const char *value, int overwrite);
int _setenv_helper1(char **environ, const char *name,
		const char *value, char **new_environ, int j);
int _setenv_helper2(char **environ, const char *name,
		const char *value, char **new_environ, int j);
int _unsetenv(char **environ, const char *name);
void _free_environ(char **environ);
char **_cpy_environ(char **environ);

#endif /*MAIN_H*/
