#include "main.h"

/**
 * get_function - get the right function to be run
 * @str: char to take decision depend on it
 * Return: return pointer to function
 */
int (*get_function(const char *str, int *ptr))(va_list, int, int, int, int)
{
	op_t op[] = {
		{"c",  print_char},
		{"s", print_str},
		{"%", print_mark},
		{"i", print_int},
		{"d", print_int},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_STR},
		{"p", print_ptr},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};

	int i = 0, j = 0;
	while (str[j] != '\0')
	{
		i = 0;
		while (op[i].s != NULL)
		{
			if (op[i].s[0] == str[j])
			{
				*ptr = j;
				return (op[i].f);
			}
			i++;
		}
		j++;
	}
	return (NULL);
}
