#include "main.h"

/**
 * get_function - get the right function to be run
 * @c: char to take decision depend on it
 * Return: return pointer to function
 */
int (*get_function(char c))(va_list)
{
	op_t op[] = {
		{"c",  print_char},
		{"s", print_str},
		{"%", print_perc},
		{"i", print_int},
		{"d", print_int},
		{"b", print_bin},
		{NULL, NULL}
	};

	int i = 0;

	while (op[i].s != NULL)
	{
		if (op[i].s[0] == c)
			return (op[i].f);

		i++;
	}
	return (NULL);
}
